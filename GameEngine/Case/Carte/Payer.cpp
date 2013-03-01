#include "Payer.h"
#include "../../Plateau.h"

Payer::Payer(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int sommeAPayer) : Carte(plateau, libelle, typeCarte)
{
    _sommeAPayer = sommeAPayer;
}

void Payer::Agir(Joueur *joueur, BilletManager *billetManager)
{
    _plateau->GetPaquetCartes(_typeCarte).push(this);
}

int Payer::SommeAPayer()
{
    return _sommeAPayer;
}

std::string Payer::GetMessage()
{
    return _libelle;
}

ACTION Payer::DoitPayer(Joueur *joueur)
{
    return DOITPAYER;
}