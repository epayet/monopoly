#include "Taxe.h"

Taxe::Taxe(Plateau *plateau, int numero, std::string libelle, int sommeAPayer) : Case(plateau, numero, libelle)
{
    _sommeAPayer = sommeAPayer;
}

void Taxe::Agir(Joueur *joueur, BilletManager *billetManager)
{
    
}

ACTION Taxe::DoitPayer()
{
    return DOITPAYER;
}

int Taxe::SommeAPayer()
{
    return _sommeAPayer;
}
