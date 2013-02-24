#include "Famille.h"

Famille::Famille(std::string couleur, std::vector<Propriete*> proprietes)
{
    _couleur = couleur;
    _proprietes = proprietes;
}

void Famille::AjouterPropriete(Propriete* propriete)
{
    _proprietes.push_back(propriete);
}
