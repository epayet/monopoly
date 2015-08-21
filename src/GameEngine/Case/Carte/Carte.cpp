#include "../Carte/Carte.h"

Carte::Carte(Plateau *plateau, std::string libelle, TYPECARTE typecarte) : Case(plateau, 0, libelle)
{
    _typeCarte = typecarte;
}

//void Carte::RemettreSousLeTas()
//{
//    _plateau->GetPaquetCartes(_typeCarte).pop();
//    _plateau->GetPaquetCartes(_typeCarte).push(this);
//}

int Carte::SommeAPayer()
{
    return -1;
}