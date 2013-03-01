#include "Parc.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Participant/Cagnotte.h"
#include "GameEngine/Plateau.h"
#include "util.h"

Parc::Parc(Plateau *plateau, int numero, std::string libelle) : Case(plateau, numero, libelle)
{
    
}

void Parc::Agir(Joueur *joueur, BilletManager*) //Transfère les billets de la Cagnotte dans le Joueur et vide cagnotte
{
    joueur->GetBilletManager()->Ajouter(_plateau->GetCagnotte()->GetBilletManager());
    _plateau->GetCagnotte()->GetBilletManager()->Vider();
}

std::string Parc::GetMessage()
{
    return "Felicitations ! Vous gagnez la cagnotte : " + intToString(_plateau->GetCagnotte()->SommeBillets()) + " Or !";
}

ACTION Parc::DoitPayer(Joueur*)
{
    return RIEN;
}