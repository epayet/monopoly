#include <queue>

#include "AllerPrison.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Case/Prison.h"

AllerPrison::AllerPrison(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte) : Carte(plateau, numero, libelle, typeCarte)
{
    
}

void AllerPrison::Agir(Joueur *joueur)
{
    Prison *prison = (Prison*)_plateau->GetCase(10);
    prison->AjouterPrisonnier(joueur);
    _plateau->GetPaquetCartes(_typeCarte).push(this);
}

std::string AllerPrison::GetMessage()
{
    return _libelle;
}

ACTION AllerPrison::DoitPayer(Joueur *joueur)
{
    return RIEN;
}
