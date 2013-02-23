#include "Plateau.h"
#include "Participant/Joueur.h"

Plateau::Plateau()
{
    _tour = 0;
}

Plateau::~Plateau()
{
    for(int i=0; i<_joueurs.size(); i++)
    {
        delete _joueurs[i];
    }
}

void Plateau::AddJoueur(std::string nomJoueur)
{
    Joueur* joueur = new Joueur(nomJoueur);
    joueur->InitialiserBillets();
    _joueurs.push_back(joueur);
}

Joueur* Plateau::GetJoueurActuel()
{
    return _joueurs[_tour];
//    return new Joueur("fake Joueur");
}

void Plateau::FinirTour()
{
    _tour++;
    
    if(_tour == _joueurs.size())
        _tour = 0;
}

std::vector<Joueur*> Plateau::GetJoueurs()
{
    return _joueurs;
}