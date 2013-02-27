#include "Domaine.h"
#include "GameEngine/Participant/Joueur.h"
#include "Famille.h"
#include "GameEngine/Plateau.h"
#include "util.h"
#include "GameEngine/Case/Case.h"

bool Domaine::PeutConstruire()
{
    if (_nombreMaisons < 5 && _proprietaire->PeutPayer(_famille->GetPrixMaisons()))
        return true;
    else
        return false;
}

void Domaine::Construire()
{
    _nombreMaisons++;
}

void Domaine::Detruire()
{
    _nombreMaisons--;
}

void Domaine::Agir(Joueur *joueur, BilletManager *billetManager)
{
    if (DoitPayer(joueur) == DOITPAYER)
        _proprietaire->Crediter(billetManager);
}

void Domaine::Hypothequer()
{
    _estHypotheque = true;
    int somme = _nombreMaisons * _famille->GetPrixMaisons();
    somme += _valeurHypotheque;
    BilletManager *hyp = new BilletManager(somme);
    _proprietaire->Crediter(hyp);
    delete hyp;
}

int Domaine::SommeAPayer()
{
    if (DoitPayer(_plateau->GetJoueurActuel()) == PEUTPAYER)
        return _prixAchat;
    else if (DoitPayer(_plateau->GetJoueurActuel()) == DOITPAYER)
    {
        if (_nombreMaisons == 0)
        {
            if (PossedeFamilleEntiere(_proprietaire)) //si possède la famille, paye terrain nu*2
                return _prixLoyer[0]*2;
            else
                return _prixLoyer[0];
        }
        else
            return _prixLoyer[_nombreMaisons];
    }
}

std::string Domaine::GetMessage()
{
    if (_proprietaire != _plateau->GetJoueurActuel())
        return "Vous êtes chez " + _proprietaire->GetNom() + ", vous lui devez : " + intToString(SommeAPayer()) + " €.";
}

int Domaine::GetNombreMaisons()
{
    return _nombreMaisons;
}