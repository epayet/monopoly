#include "../Case/CaseCarte.h"
#include "../Plateau.h"

CaseCarte::CaseCarte(Plateau *plateau, int numero, std::string libelle, TYPECARTE typecarte) : Case(plateau, numero, libelle)
{
    _typeCarte = typecarte;
}

void CaseCarte::Agir(Joueur *joueur, BilletManager *billetManager)
{
    return _plateau->TirerCarte(_typeCarte, true)->Agir(joueur, billetManager);        
}

int CaseCarte::SommeAPayer()
{
    return _plateau->TirerCarte(_typeCarte)->SommeAPayer();
}

ACTION CaseCarte::DoitPayer(Joueur *joueur)
{
    return _plateau->TirerCarte(_typeCarte)->DoitPayer(joueur);
}

std::string CaseCarte::GetMessage()
{
    
    if(_typeCarte==CHANCE)
        return "Vous tirez une carte Chance : \n" + _plateau->TirerCarte(_typeCarte)->GetMessage();
    else
        return "Vous tirez une carte Caisse de Communaute : \n" + _plateau->TirerCarte(_typeCarte)->GetMessage();
}

std::string CaseCarte::GetLibelle()
{
    return _plateau->TirerCarte(_typeCarte)->GetLibelle();
}

