#include "SortirPrison.h"

SortirPrison::SortirPrison(Plateau *plateau, std::string libelle, TYPECARTE typeCarte) : Carte(plateau, libelle, typeCarte)
{
    
}

void SortirPrison::Agir(Joueur *joueur, BilletManager*)
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