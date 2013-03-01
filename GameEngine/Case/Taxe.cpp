#include "Taxe.h"
#include "util.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Cagnotte.h"

Taxe::Taxe(Plateau *plateau, int numero, std::string libelle, int sommeAPayer) : Case(plateau, numero, libelle)
{
    _sommeAPayer = sommeAPayer;
}

void Taxe::Agir(Joueur *joueur, BilletManager *billetManager)
{
    _plateau->GetCagnotte()->GetBilletManager()->Ajouter(billetManager);
}

std::string Taxe::GetMessage()
{
    return "Vous devez payer la taxe " + _libelle + " : " + intToString(_sommeAPayer) + " Or.";
}

ACTION Taxe::DoitPayer(Joueur*)
{
    return DOITPAYER;
}

int Taxe::SommeAPayer()
{
    return _sommeAPayer;
}
