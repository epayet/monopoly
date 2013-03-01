#include "util.h"
#include <cstdlib>
#include <sstream>
#include <fstream>
#include <cerrno>

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

std::string get_file_contents(const char *filename)
{
    std::ifstream in(filename, std::ios::in | std::ios::binary);
    if (in)
    {
        std::string contents;
        in.seekg(0, std::ios::end);
        contents.resize(in.tellg());
        in.seekg(0, std::ios::beg);
        in.read(&contents[0], contents.size());
        in.close();
        return (contents);
    }
    throw (errno);
}