#include "Plateau.h"
#include "Participant/Joueur.h"
#include "Participant/Cagnotte.h"
#include "Case/Case.h"
#include "Case/Propriété/Propriete.h"

Plateau::Plateau()
{
    _tour = 0;
    _cagnotte = new Cagnotte;
    
    for(int i=0; i<NBCASES; i++)
    {
        //Fakes cases
        std::vector<int> prix;
        prix.push_back(0);
        prix.push_back(1);
        prix.push_back(2);
        prix.push_back(3);
        prix.push_back(4);
        prix.push_back(5);
        _cases.push_back(new Propriete(this, i, "fake case", 10, 10, prix));
    }
}

Plateau::~Plateau()
{
    for(int i=0; i<_joueurs.size(); i++)
        delete _joueurs[i];
    
    for(int i=0; i<_cases.size(); i++)
        delete _cases[i];
    
    delete _cagnotte;
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

Cagnotte* Plateau::GetCagnotte()
{
    return _cagnotte;
}

Case* Plateau::GetCase(int numero)
{
    return _cases[numero];
}
