#include "Deplacement.h"
#include "../../Plateau.h"

Deplacement::Deplacement(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int numCaseFinale, bool passeParDepart) : Carte(plateau, libelle, typeCarte)
{
    _numeroCaseFinale = numCaseFinale;
    _passeParCaseDepart = passeParDepart;
}

void Deplacement::Agir(Joueur *joueur, BilletManager*)
{
    if(_numeroCaseFinale<0)     //Déplacement de type "reculez de X cases"
        joueur->Placer(_plateau->GetCase(joueur->GetPosition() - _numeroCaseFinale), _passeParCaseDepart);
    else
        joueur->Placer(_plateau->GetCase(_numeroCaseFinale), _passeParCaseDepart);
}

std::string Deplacement::GetMessage()
{
    return _libelle;
}

ACTION Deplacement::DoitPayer(Joueur *joueur)
{
    return ESTDEPLACE;
}
