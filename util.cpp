#include "util.h"
#include <cstdlib>
#include <sstream>

/**
 * Génère un nombre aléatoire entre a et b (b > a)
 * @param a
 * @param b
 * @return 
 */
int rand_a_b(int a, int b)
{
	return rand() % (b - a) + a;
}

std::string intToString(int nb)
{
    // créer un flux de sortie
	std::ostringstream oss;
	// écrire un nombre dans le flux
	oss << nb;
	// récupérer une chaîne de caractères
	return oss.str();
}