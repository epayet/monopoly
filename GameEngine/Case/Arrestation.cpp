#include "Arrestation.h"
#include "GameEngine/Participant/Joueur.h"
#include "Prison.h"
#include "../Plateau.h"

Arrestation::Arrestation(Plateau* plateau, int numero, std::string libelle) : Case(plateau, numero, libelle)
{
    
}

void Arrestation::Agir(Joueur *joueur, BilletManager*)
{
    Prison *prison = (Prison*)_plateau->GetCase(10);
    prison->AjouterPrisonnier(joueur);    //MAJ la prison
}

std::string Arrestation::GetMessage()
{
    return "Vous etes envoye en prison !";
}

ACTION Arrestation::DoitPayer(Joueur*)
{
    return RIEN;
}

int Arrestation::SommeAPayer()
{
    return 1;
}