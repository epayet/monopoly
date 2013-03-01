#include "Domaine.h"
#include "GameEngine/Participant/Joueur.h"
#include "Famille.h"
#include "GameEngine/Plateau.h"
#include "util.h"
#include "GameEngine/Case/Case.h"

Domaine::Domaine(Plateau* plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer, Famille* famille) 
        : Propriete(plateau, numero, libelle, valeurHypotheque, prixAchat, prixLoyer, famille)
{
    _nombreMaisons = 0;
}

bool Domaine::PeutConstruire()
{
    return _nombreMaisons < 5 && _proprietaire->PeutPayer(_famille->GetPrixMaisons()) && PossedeFamilleEntiere(_plateau->GetJoueurActuel());
}

void Domaine::Construire()
{
    _nombreMaisons++;
}

bool Domaine::PeutDetruire()
{
    return _nombreMaisons > 0;
}

void Domaine::Detruire()
{
    _nombreMaisons--;
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
    if (DoitPayer(_plateau->GetJoueurActuel())==DOITPAYER)
        return "Vous êtes chez " + _proprietaire->GetNom() + ", vous lui devez : " + intToString(SommeAPayer()) + " euros.";
    else if(DoitPayer(_plateau->GetJoueurActuel())==PEUTPAYER)
        return "Vous pouvez acheter cette propriété. Elle coûte : " + intToString(_prixAchat)+ " euros.";
    else if (DoitPayer(_plateau->GetJoueurActuel())==RIEN && _plateau->GetJoueurActuel() == _proprietaire)
        return "Vous etes chez vous.";
    else
        return "";
}

int Domaine::GetNombreMaisons()
{
    return _nombreMaisons;
}