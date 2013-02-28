#include "Arrestation.h"
#include "GameEngine/Participant/Joueur.h"
#include "Prison.h"
#include "../Plateau.h"

void Arrestation::Agir(Joueur *joueur)
{
    Prison *prison = (Prison*)_plateau->GetCase(10);
    joueur->Placer(prison, false);
    prison->AjouterPrisonnier(joueur);    //MAJ la prison
}

std::string Arrestation::GetMessage()
{
    return "Vous êtes envoyé en prison !";
}

ACTION Arrestation::DoitPayer()
{
    return RIEN;
}