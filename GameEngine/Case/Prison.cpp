#include "Prison.h"

Prison::Prison(Plateau *plateau, int numero, std::string libelle) : Case(plateau, numero, libelle)
{
    
}

void Prison::Agir(Joueur *joueur)
{
    
}

ACTION Prison::DoitPayer()
{
    return RIEN;
}