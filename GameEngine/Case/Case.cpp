#include "Case.h"

Case::Case(int numero)
{
	_numero = numero;
}

void Case::Agir(Joueur *joueur)
{

}

int Case::GetNumero()
{
	return _numero;
}