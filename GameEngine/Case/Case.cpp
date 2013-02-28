#include "Case.h"
#include "../Participant/Joueur.h"
#include "../Plateau.h"
#include "../../util.h"

Case::Case(Plateau *plateau, int numero, std::string libelle)
{
	_plateau = plateau;
        _numero = numero;
        _libelle = libelle;
}


int Case::GetNumero()
{
	return _numero;
}

std::string Case::GetLibelle()
{
    return _libelle;
}

bool Case::Achetable()
{
    return false;
}