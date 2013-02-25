#include "Propriete.h"

Propriete::Propriete(Plateau *plateau, int numero, std::string libelle) : Case(plateau, numero, libelle)
{

}

int Propriete::Hypothequer()
{
	return -1;
}

void Propriete::Acheter(Joueur *joueur)
{

}

int Propriete::LeverHypotheque()
{
	return -1;
}

ACTION Propriete::DoitPayer(Joueur *joueur)
{
    if (_proprietaire==joueur)
        return RIEN;
    else if (_proprietaire==NULL)
        return PEUTACHETER;
    else
    {
        return DOITPAYER;
    }
}

int Propriete::SommeAPayer()
{
    return -1;
}

void Propriete::Agir(Joueur* joueur, BilletManager* billetManager)
{
    
}