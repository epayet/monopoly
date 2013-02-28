#include "Deplacement.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"
#include "GameEngine/Plateau.h"

Deplacement::Deplacement(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte, int numCaseFinale, bool passeParDepart) : Carte(plateau, numero, libelle, typeCarte)
{
    _numeroCaseFinale = numCaseFinale;
    _passeParCaseDepart = passeParDepart;
}

void Deplacement::Agir(Joueur *joueur)
{
    joueur->Placer(_plateau->GetCase(_numeroCaseFinale), _passeParCaseDepart);
    //enfiler carte;
}

std::string Deplacement::GetMessage()
{
    return _libelle;
}

ACTION Deplacement::DoitPayer(Joueur *joueur)
{
    return ESTDEPLACE;
}
