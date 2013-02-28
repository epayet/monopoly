/* 
 * File:   Plateau.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:34
 */

#ifndef PLATEAU_H
#define	PLATEAU_H

#define NBCASES 40

#include <cstdlib>
#include <vector>
#include <queue>
#include <string>
#include "Case/Carte/Carte.h"

class Case;
class Joueur;
class Carte;
class Cagnotte;
class Banque;
class Carte;

class Plateau {
public:
	Plateau();
	~Plateau();
	void AjouterJoueur(std::string nomJoueur);
    Joueur* GetJoueurActuel();
    vector<Joueur*> GetJoueurs();
    void FinirTour();
    Case* GetCase(int);
    Cagnotte* GetCagnotte();
    void JoueurActuelAPerdu();
    bool EstFini();
    Carte* GetCarte(TYPECARTE typeCarte);
    std::queue<Carte*> GetPaquetCartes(TYPECARTE typeCarte);

private:
    vector<Case*> _cases;
    vector<Joueur*> _joueurs;
    Cagnotte *_cagnotte;
    int _tour;
    std::queue<Carte*> _cartesChance;
    std::queue<Carte*> _cartesCommunaute;
};

#endif	/* PLATEAU_H */

