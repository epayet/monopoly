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
    if(DoitPayer(joueur)==DOITPAYER)
    {
        _plateau->GetCagnotte()->Crediter(billetManager);
        _emprisonnes[GetIndicePrisonnier(joueur)].second = -1; //Sort de prison
    }
    else if(DoitPayer(joueur)==PEUTPAYER && billetManager!=NULL)
    {
        _plateau->GetCagnotte()->Crediter(billetManager);
        _emprisonnes[GetIndicePrisonnier(joueur)].second == -1; //Sort de prison
    }
    else if(DoitPayer(joueur)==RIEN)
    {
        if(EstEnPrison(joueur))
        {
            if(joueur->PossedeCarteSortirPrison())
            {
                _emprisonnes[GetIndicePrisonnier(joueur)].second = -1; //Sort de prison
                joueur->EnleverCarteSortirPrison();
            }
            else if(joueur->AFaitDouble())
                _emprisonnes[GetIndicePrisonnier(joueur)].second = -1; //Sort de prison
        }
    }
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
    if(EstEnPrison(joueur))
    {
        if(joueur->PossedeCarteSortirPrison())
            return RIEN;
        else if(joueur->AFaitDouble())
            return RIEN;
        else
        {
            _emprisonnes[GetIndicePrisonnier(joueur)].second++;
            if(_emprisonnes[GetIndicePrisonnier(joueur)].second<3)
                return PEUTPAYER;
            else
                return DOITPAYER;
        }
    }
    else
        return RIEN;
}

void Prison::AjouterPrisonnier(Joueur* joueur)
{
    AjouterNbToursPasses(joueur);

    joueur->Placer(this, false);
}

void Prison::AjouterNbToursPasses(Joueur* joueur)
{
    _emprisonnes[GetIndicePrisonnier(joueur)].second++;
}

bool Prison::EstEnPrison(Joueur *joueur)
{
    return (_emprisonnes[GetIndicePrisonnier(joueur)].second >-1);
}

void Prison::AjouterJoueur(Joueur* joueur)
{
    Prisonnier nouveauPrisonnier;
    nouveauPrisonnier.first = joueur;
    nouveauPrisonnier.second = -1;
    _emprisonnes.push_back(nouveauPrisonnier);
}

int Prison::GetIndicePrisonnier(Joueur* joueur)
{
    for (int i = 0; i < _emprisonnes.size(); i++)
    {
        if (_emprisonnes[i].first == joueur)
            return i;
    }
}