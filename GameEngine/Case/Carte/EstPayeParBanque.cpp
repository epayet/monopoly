#include "EstPayeParBanque.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Case/Case.h"
#include "Carte.h"
#include "../../Plateau.h"

EstPayeParBanque::EstPayeParBanque(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int somme) : Carte(plateau, libelle, typeCarte)
{
    _sommeADonner = somme;
}


void EstPayeParBanque::Agir(Joueur *joueur, BilletManager *billetManager)
{
    joueur->Crediter(billetManager);
    _plateau->GetPaquetCartes(_typeCarte).push(this);
}


std::string EstPayeParBanque::GetMessage()
{
    return _libelle;
}


ACTION EstPayeParBanque::DoitPayer(Joueur *joueur)
{
    return RIEN;
}

