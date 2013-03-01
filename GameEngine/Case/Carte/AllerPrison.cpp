#include <queue>
#include "AllerPrison.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Case/Prison.h"

AllerPrison::AllerPrison(Plateau *plateau, std::string libelle, TYPECARTE typeCarte) : Carte(plateau, libelle, typeCarte)
{
    
}

void AllerPrison::Agir(Joueur *joueur, BilletManager*)
{
    Prison *prison = (Prison*)_plateau->GetCase(10);
    prison->AjouterPrisonnier(joueur);
}

std::string AllerPrison::GetMessage()
{
    return _libelle;
}

ACTION AllerPrison::DoitPayer(Joueur *joueur)
{
    return RIEN;
}
