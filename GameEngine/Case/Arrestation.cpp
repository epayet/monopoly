#include "Arrestation.h"
#include "GameEngine/Participant/Joueur.h"
#include "Prison.h"

void Arrestation::Agir(Joueur *joueur)
{
    //joueur->Placer(Prison, false);
    //Prison->AjouterPrisonnier(joueur);    //remplit le dico des Emprisonnes
}

std::string Arrestation::GetMessage()
{
    return "";
}

ACTION Arrestation::DoitPayer()
{
    return RIEN;
}