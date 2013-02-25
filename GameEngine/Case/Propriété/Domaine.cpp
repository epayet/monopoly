#include "Domaine.h"
#include "GameEngine/Participant/Joueur.h"
#include "Famille.h"

bool Domaine::PeutConstruire()
{
	if(_nombreMaisons<5 && _proprietaire->PeutPayer(_famille->GetPrixMaisons()))
        return true;
    else
        return false;
}

void Domaine::Construire()
{
    _nombreMaisons++;
    _proprietaire->Payer(_famille->GetPrixMaisons());
}

int Domaine::Detruire()
{
	_nombreMaisons--;
    BilletManager *prixMaison = new BilletManager(_famille->GetPrixMaisons());
    _proprietaire->Crediter(prixMaison);
}

void Domaine::Agir(Joueur *joueur)
{
    if(_proprietaire==joueur)
    {
        
    }
    else
    {
        if(_nombreMaisons==0)
        {
            int i, nbProprietesPossedees, nbProprietes = 0;
            for(i=0; i<=_famille->GetProprietes().size(); i++)
            {
                std::vector<Propriete*> proprietes = _famille->GetProprietes();
                if(proprietes[i]->GetProprietaire()==joueur)
                    nbProprietesPossedees++;
                nbProprietes++;
            }
            if(nbProprietesPossedees==nbProprietes) //si possède la famille, paye terrain nu*2
                joueur->Payer(_prixLoyer[0]*2);
            else
                joueur->Payer(_prixLoyer[0]);
        }
        else
            joueur->Payer(_prixLoyer[_nombreMaisons]);
    }
}

void Domaine::Hypothequer()
{
    _estHypotheque = true;
    int somme = _nombreMaisons * _famille->GetPrixMaisons();
    somme += _valeurHypotheque;
    BilletManager *hyp = new BilletManager(somme);
    _proprietaire->Crediter(hyp);
}