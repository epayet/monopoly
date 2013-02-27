#include "Taxe.h"
#include "util.h"

Taxe::Taxe(Plateau *plateau, int numero, std::string libelle, int sommeAPayer) : Case(plateau, numero, libelle)
{
    _sommeAPayer = sommeAPayer;
}

void Taxe::Agir(Joueur *joueur, BilletManager *billetManager)
{
    
}

std::string Taxe::GetMessage()
{
    return "Vous devez payer la taxe " + _libelle + " : " + intToString(_sommeAPayer) + " €.";
}

ACTION Taxe::DoitPayer(Joueur*)
{
    return DOITPAYER;
}

int Taxe::SommeAPayer()
{
    return _sommeAPayer;
}
