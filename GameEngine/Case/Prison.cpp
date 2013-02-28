#include "Prison.h"
#include "GameEngine/Billet/BilletManager.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Plateau.h"
#include "util.h"

Prison::Prison(Plateau *plateau, int numero, std::string libelle, int prixSortie) : Case(plateau, numero, libelle)
{
    int i = 0;
    Prisonnier nouveauPrisonnier;
    for(i=0; i<_plateau->GetJoueurs().size();i++)
    {
        nouveauPrisonnier.first = plateau->GetJoueurs()[i];
        nouveauPrisonnier.second = -1;
        _emprisonnes.push_back(nouveauPrisonnier);
    }
    _prixSortie = prixSortie;
}

void Prison::Agir(Joueur *joueur, BilletManager *billetManager)
{
    
}

std::string Prison::GetMessage()
{
    if(EstEnPrison(_plateau->GetJoueurActuel()))
    {
        if(DoitPayer(_plateau->GetJoueurActuel())==DOITPAYER)
        {
            return "Vous êtes resté 3 tours en prison : payez " + intToString(_prixSortie) + " euros.";
        }
        else if(DoitPayer(_plateau->GetJoueurActuel())==PEUTPAYER)
        {
            return "Vous pouvez payer" + intToString(_prixSortie) + " euros pour sortir de prison.";
        }
    }
    else
    {
        return "Vous visitez la prison.";
    }
}

int Prison::SommeAPayer()
{
    return _prixSortie;
}

ACTION Prison::DoitPayer(Joueur *joueur)
{
    int i = 0;
    for(i=0; i<=_emprisonnes.size(); i++)
    {
        if(EstEnPrison(joueur) && _emprisonnes[i].first==joueur)  //Est en prison
        {
            if(joueur->PossedeCarteSortirPrison())
            {
                _emprisonnes[i].second==-1;      //Sort de prison
                joueur->EnleverCarteSortirPrison();
                return RIEN;
            }
            else if(joueur->AFaitDouble())             //Fait un double
            {
                _emprisonnes[i].second==-1;      //Sort de prison
                return RIEN;
            }
            else
            {
                AjouterNbToursPasses(joueur);   //nbToursPassesEnPrison++
                if(_emprisonnes[i].second==3)   //Si ça fait 3 tours en prison
                    return DOITPAYER;
                else    //Si ça fait moins de 3 tours en prison
                    return PEUTPAYER;
            }
        }
        else
            return RIEN;
    }
}

void Prison::AjouterPrisonnier(Joueur* joueur)
{
    int i = 0;
    for(i=0; i<_plateau->GetJoueurs().size(); i++)
    {
        if(_emprisonnes[i].first==joueur)
            _emprisonnes[i].second++;   //Met nbToursPassesEnPrison à 0
    }
    ;
}

void Prison::AjouterNbToursPasses(Joueur* joueur)
{
    int i = 0;
    for (i=0; i<=_emprisonnes.size(); i++)
    {
        if (_emprisonnes[i].first == joueur)
            _emprisonnes[i].second++;
    }
}

bool Prison::EstEnPrison(Joueur *joueur)
{
    int i=0;
    for(i=0; i<=_emprisonnes.size();i++)
    {
        if(_emprisonnes[i].first==joueur && _emprisonnes[i].second>-1)
            return true;
    }
}