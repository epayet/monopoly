#include "Case/Carte/Carte.h"
#include "GameEngine/Participant/Participant.h"
#include "util.h"
#include "Case/Case.h"
#include "GameEngine/Plateau.h"


Carte::Carte(Plateau *plateau, int numero, std::string libelle, TYPECARTE typecarte) : Case(plateau, numero, libelle)
{
    _typeCarte = typecarte;
}

void Carte::Agir(Joueur *joueur, BilletManager *billetManager)
{
    return _plateau->GetCarte(_typeCarte)->Agir(joueur, billetManager);        
}

int Carte::SommeAPayer()
{
    return _plateau->GetCarte(_typeCarte)->SommeAPayer();
}

ACTION Carte::DoitPayer(Joueur *joueur)
{
    return _plateau->GetCarte(_typeCarte)->DoitPayer(joueur);
}

std::string Carte::GetMessage()
{
    
    return _plateau->GetCarte(_typeCarte)->GetMessage();
}

std::string Carte::GetLibelle()
{
    return _plateau->GetCarte(_typeCarte)->GetLibelle();
}

