#include "Prison.h"
#include "GameEngine/Billet/BilletManager.h"
#include "GameEngine/Participant/Participant.h"

Prison::Prison(Plateau *plateau, int numero, std::string libelle) : Case(plateau, numero, libelle)
{
    
}

void Prison::Agir(Joueur *joueur, BilletManager *billetManager)
{
    
}

std::string Prison::GetMessage()
{
    return "";
}

int Prison::SommeAPayer()
{
    return _prixSortie;
}

ACTION Prison::DoitPayer(Joueur *joueur)
{
    /*
    int i = 0;
    for(i=0; i<=_emprisonnes.size(); i++)
    {
        if(_emprisonnes[i]->first==joueur)  //Est en prison
        {
            if(AFaitUnDouble())             //Fait un double
            {
                _emprisonnes.erase(i);      //Sort de prison
                return RIEN;
            }
            else
            {
                _emprisonnes[i].second++;   //nbToursPassesEnPrison++
                if(_emprisonnes[i].second>=3)   //Si ça fait 3 tours en prison
                    return DOITPAYER;
                else    //Si ça fait moins de 3 tours en prison
                    return PEUTPAYER;
            }
        }
        else
            return RIEN;
    }
    */
}

void Prison::AjouterPrisonnier(Joueur* joueur)
{
    Prisonnier nouveauPrisonnier;
    nouveauPrisonnier.first = joueur;
    nouveauPrisonnier.second = 0;
    _emprisonnes.push_back(nouveauPrisonnier);  //Ajoute dico dans collection (vector)
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
        if(_emprisonnes[i].first==joueur)
            return true;
    }
}