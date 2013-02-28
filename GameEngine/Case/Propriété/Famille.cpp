#include "Famille.h"

Famille::Famille(std::string couleur, int prixMaisons, std::vector<Propriete*> proprietes)
{
    _couleur = couleur;
    _proprietes = proprietes;
    _prixMaisons = prixMaisons;
}

Famille::Famille(std::string couleur, int prixMaisons)
{
    _couleur = couleur;
    _prixMaisons = prixMaisons;
}

void Famille::AjouterPropriete(Propriete* propriete)
{
    _proprietes.push_back(propriete);
}

int Famille::GetPrixMaisons()
{
    return _prixMaisons;
}

std::vector<Propriete*> Famille::GetProprietes()
{
    return _proprietes;
}