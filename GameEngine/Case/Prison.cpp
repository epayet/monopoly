#include "Prison.h"
#include "GameEngine/Billet/BilletManager.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Plateau.h"
#include "util.h"
#include "../Participant/Cagnotte.h"

Prison::Prison(Plateau *plateau, int numero, std::string libelle, int prixSortie) : Case(plateau, numero, libelle)
{
    int i = 0;

    _prixSortie = prixSortie;
}

void Prison::Agir(Joueur *joueur, BilletManager *billetManager)
{
    if(billetManager != NULL)
        _plateau->GetCagnotte()->Crediter(billetManager);
    
    if(EstEnPrison(joueur))
        AjouterNbToursPasses(joueur); //nbToursPassesEnPrison++
}

std::string Prison::GetMessage()
{
    if (EstEnPrison(_plateau->GetJoueurActuel()))
    {
        if (DoitPayer(_plateau->GetJoueurActuel()) == DOITPAYER)
        {
            return "Vous etes reste 3 tours en prison : payez " + intToString(_prixSortie) + " Or.";
        }
        else if (DoitPayer(_plateau->GetJoueurActuel()) == PEUTPAYER)
        {
            return "Vous pouvez payer" + intToString(_prixSortie) + " Or pour sortir de prison.";
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
    for (i = 0; i <= _emprisonnes.size(); i++)
    {
        if (EstEnPrison(joueur) && _emprisonnes[i].first == joueur) //Est en prison
        {
            if (joueur->PossedeCarteSortirPrison())
            {
                _emprisonnes[i].second == -1; //Sort de prison
                joueur->EnleverCarteSortirPrison();
                return RIEN;
            }
            else if (joueur->AFaitDouble()) //Fait un double
            {
                _emprisonnes[i].second == -1; //Sort de prison
                return RIEN;
            }
            else
            {
                if (_emprisonnes[i].second == 3) //Si ça fait 3 tours en prison
                    return DOITPAYER;
                else //Si ça fait moins de 3 tours en prison
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
    for (i = 0; i < _plateau->GetJoueurs().size(); i++)
    {
        if (_emprisonnes[i].first == joueur)
            _emprisonnes[i].second++; //Met nbToursPassesEnPrison à 0
    }

    joueur->Placer(this, false);
}

void Prison::AjouterNbToursPasses(Joueur* joueur)
{
    int i = 0;
    for (i = 0; i <= _emprisonnes.size(); i++)
    {
        if (_emprisonnes[i].first == joueur)
            _emprisonnes[i].second++;
    }
}

bool Prison::EstEnPrison(Joueur *joueur)
{
    for (int i = 0; i < _emprisonnes.size(); i++)
    {
        if (_emprisonnes[i].first == joueur && _emprisonnes[i].second>-1)
            return true;
    }

    return false;
}

void Prison::AjouterJoueur(Joueur* joueur)
{
    Prisonnier nouveauPrisonnier;
    nouveauPrisonnier.first = joueur;
    nouveauPrisonnier.second = -1;
    _emprisonnes.push_back(nouveauPrisonnier);
}