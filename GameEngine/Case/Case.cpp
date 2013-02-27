#include "Case.h"
#include "../Participant/Joueur.h"
#include "../Plateau.h"

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
