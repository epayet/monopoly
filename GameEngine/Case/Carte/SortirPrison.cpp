#include "SortirPrison.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"

SortirPrison::SortirPrison(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte) : Carte(plateau, numero, libelle, typeCarte)
{
    
}

void SortirPrison::Agir(Joueur *joueur)
{
    joueur->AjouterCarteSortirPrison();
}

std::string SortirPrison::GetMessage()
{
    return _libelle;
}

ACTION SortirPrison::DoitPayer(Joueur *joueur)
{
    return RIEN;
}