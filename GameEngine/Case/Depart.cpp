#include "Depart.h"


Depart::Depart(Plateau *plateau, int numero, std::string libelle, int sommeADonner) : Case(plateau, numero, libelle)
{
    _sommeADonner = sommeADonner;
}

void Depart::Agir(Joueur *joueur)
{
    
}

ACTION Depart::DoitPayer()
{
    return RIEN;
}