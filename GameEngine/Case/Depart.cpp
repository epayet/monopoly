#include "Depart.h"
#include "GameEngine/Participant/Participant.h"


Depart::Depart(Plateau *plateau, int numero, std::string libelle, int sommeADonner) : Case(plateau, numero, libelle)
{
    _sommeADonner = sommeADonner;
}

void Depart::Agir(Joueur *joueur)
{
    
}

int Depart::SommeAPayer()
{
    return _sommeADonner;
}

ACTION Depart::DoitPayer()
{
    return RIEN;
}

std::string Depart::GetMessage()
{
    return "";
}