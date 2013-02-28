#include "Propriete.h"
#include "../Case.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Participant/Joueur.h"
#include "Famille.h"

Propriete::Propriete(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer, Famille *famille) : Case(plateau, numero, libelle)
{
    _proprietaire = NULL;
    _estHypotheque = false;
    _prixAchat = prixAchat;
    _valeurHypotheque = valeurHypotheque;
    _prixLoyer = prixLoyer;
    _famille = famille;
}

void Propriete::Agir(Joueur* joueur, BilletManager* billetManager)
{
    if (DoitPayer(joueur) == DOITPAYER)
        _proprietaire->Crediter(billetManager);
    else if(DoitPayer(joueur) == PEUTPAYER && billetManager!=NULL)
        _proprietaire = joueur;
}

void Propriete::Hypothequer()
{
    _estHypotheque = true;
    BilletManager *hypotheque = new BilletManager(_valeurHypotheque);
    _proprietaire->Crediter(hypotheque);
    delete hypotheque;    
}

void Propriete::Acheter(Joueur *joueur)
{
    _proprietaire = joueur;
}

int Propriete::LeverHypotheque()
{
	_estHypotheque = false;
    int levHyp = _valeurHypotheque + _valeurHypotheque*10/100;
    return levHyp;
}

ACTION Propriete::DoitPayer(Joueur *joueur)
{
    if (_proprietaire==joueur)
        return RIEN;
    else if (_proprietaire==NULL && joueur->GetNbTours()>0)
        return PEUTPAYER;
    else
    {
        return DOITPAYER;
    }
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
    int i, nbProprietes, nbPossedes = 0;
    for(i=0; i<=_famille->GetProprietes().size(); i++)
    {
        if(_famille->GetProprietes()[i]->_proprietaire == joueur)
            nbPossedes++;
        nbProprietes++;
    }
    if(nbPossedes == nbProprietes)
        return true;
}