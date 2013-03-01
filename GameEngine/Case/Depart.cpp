#include "Depart.h"
#include "GameEngine/Participant/Participant.h"
#include "util.h"


Depart::Depart(Plateau *plateau, int numero, std::string libelle, int sommeADonner) : Case(plateau, numero, libelle)
{
    _sommeADonner = sommeADonner;
}

void Depart::Agir(Joueur *joueur, BilletManager*)
{
//    BilletManager *sommeADonner = new BilletManager(_sommeADonner);
//    joueur->GetBilletManager()->Ajouter(sommeADonner);
//    delete sommeADonner;
}

int Depart::SommeAPayer()
{
    return _sommeADonner;
}

ACTION Depart::DoitPayer(Joueur*)
{
    return RIEN;
}

std::string Depart::GetMessage()
{
    return "Vous passez par la case depart : vous gagnez " + intToString(_sommeADonner) + " Or.";
}