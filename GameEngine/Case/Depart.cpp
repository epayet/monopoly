#include "Depart.h"
#include "GameEngine/Participant/Participant.h"
#include "util.h"


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
    return "Vous passez par la case départ : vous gagnez " + intToString(_sommeADonner) + " €.";
}