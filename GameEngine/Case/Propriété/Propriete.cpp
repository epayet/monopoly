#include "Propriete.h"
#include "../Case.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Participant/Joueur.h"
#include "Famille.h"
#include "../../Plateau.h"
#include "../../../util.h"

Propriete::Propriete(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer, Famille *famille) : Case(plateau, numero, libelle)
{
    _proprietaire = NULL;
    _estHypotheque = false;
    _prixAchat = prixAchat;
    _valeurHypotheque = valeurHypotheque;
    _prixLoyer = prixLoyer;
    _famille = famille;
}

Propriete::~Propriete()
{
    delete _famille;
}

void Propriete::Agir(Joueur* joueur, BilletManager* billetManager)
{
    if (DoitPayer(joueur) == DOITPAYER)
        _proprietaire->Crediter(billetManager);
    else if (DoitPayer(joueur) == PEUTPAYER && billetManager != NULL)
    {
        _proprietaire = joueur;
        joueur->Acheter(this);
    }
}

void Propriete::Hypothequer()
{
    _estHypotheque = true;
    BilletManager *hypotheque = new BilletManager(_valeurHypotheque);
    _proprietaire->Crediter(hypotheque);
    delete hypotheque;
}

void Propriete::LeverHypotheque()
{
    _estHypotheque = false;
}

int Propriete::GetValeurLeverHypotheque()
{
    return _valeurHypotheque + _valeurHypotheque * 10 / 100;
}

ACTION Propriete::DoitPayer(Joueur *joueur)
{
    if (_proprietaire == joueur)
        return RIEN;
    else if (_proprietaire == NULL && joueur->GetNbTours() > 0)
        return PEUTPAYER;
    else if (_proprietaire != NULL)
        return DOITPAYER;
    else
        return RIEN;
}

Joueur* Propriete::GetProprietaire()
{
    return _proprietaire;
}

int Propriete::GetValeurHypotheque()
{
    return _valeurHypotheque;
}

int Propriete::GetPrixMaisons()
{
    return _famille->GetPrixMaisons();
}

bool Propriete::PossedeFamilleEntiere(Joueur *joueur)
{
    int nbPossedes = 0;
    for (int i = 0; i < _famille->GetProprietes().size(); i++)
    {
        if (_famille->GetProprietes()[i]->GetProprietaire() == joueur)
            nbPossedes++;
    }

    return nbPossedes == _famille->GetProprietes().size();
}

bool Propriete::Achetable()
{
    return true;
}

bool Propriete::PeutConstruire()
{
    return false;
}

std::string Propriete::GetMessage()
{
    if (DoitPayer(_plateau->GetJoueurActuel()) == DOITPAYER)
        return "Vous etes sur " + _libelle + ".Cette propriete appartient a " + _proprietaire->GetNom() + ", vous lui devez : " + intToString(SommeAPayer()) + " Or.";
    else if (DoitPayer(_plateau->GetJoueurActuel()) == PEUTPAYER)
        return "Vous pouvez acheter cette propriété. Elle coute : " + intToString(_prixAchat) + " Or.";
    else if (DoitPayer(_plateau->GetJoueurActuel()) == RIEN && _plateau->GetJoueurActuel() == _proprietaire)
        return "Vous etes chez vous.";
    else
        return "";
}

bool Propriete::EstHypotheque()
{
    return _estHypotheque;
}