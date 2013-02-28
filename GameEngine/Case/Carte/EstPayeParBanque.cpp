#include "EstPayeParBanque.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Case/Case.h"
#include "Carte.h"

EstPayeParBanque::EstPayeParBanque(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte, int somme) : Carte(plateau, numero, libelle, typeCarte)
{
    _sommeADonner = somme;
}


void EstPayeParBanque::Agir(Joueur *joueur, BilletManager *billetManager)
{
    joueur->Crediter(billetManager);
    //enfiler carte;
}


std::string EstPayeParBanque::GetMessage()
{
    return _libelle;
}


ACTION EstPayeParBanque::DoitPayer(Joueur *joueur)
{
    return RIEN;
}

