#include "Parc.h"
#include "GameEngine/Participant/Participant.h"

Parc::Parc(Plateau *plateau, int numero, std::string libelle) : Case(plateau, numero, libelle)
{
    
}

void Parc::Agir(Joueur *joueur) //Transfère les billets de la Cagnotte dans le Joueur et vide cagnotte
{
    //joueur->GetBilletManager()->Ajouter(Plateau->GetCagnotte->GetBilletManager());
    //Cagnotte->GetBilletManager()->Vider();
}

ACTION Parc::DoitPayer()
{
    return RIEN;
}

std::string Parc::GetMessage()
{
    return "";
}