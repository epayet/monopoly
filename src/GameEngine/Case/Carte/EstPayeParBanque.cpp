#include "EstPayeParBanque.h"
#include "../../Plateau.h"

EstPayeParBanque::EstPayeParBanque(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int somme) : Carte(plateau, libelle, typeCarte)
{
    _sommeADonner = somme;
}


void EstPayeParBanque::Agir(Joueur *joueur, BilletManager *billetManager)
{
    BilletManager* billetsBanque = new BilletManager(_sommeADonner);
    joueur->Crediter(billetsBanque);
    delete billetsBanque;
}


std::string EstPayeParBanque::GetMessage()
{
    return _libelle;
}


ACTION EstPayeParBanque::DoitPayer(Joueur *joueur)
{
    return RIEN;
}

