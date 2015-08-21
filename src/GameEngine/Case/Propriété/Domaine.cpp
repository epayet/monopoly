#include "Domaine.h"
#include "../../Plateau.h"

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
    BilletManager *hyp = new BilletManager(GetValeurHypotheque());
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

int Domaine::GetNombreMaisons()
{
    return _nombreMaisons;
}

int Domaine::GetValeurHypotheque()
{
    return _nombreMaisons * _famille->GetPrixMaisons() + _valeurHypotheque;
}