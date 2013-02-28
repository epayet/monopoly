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
#include <string>

class Case;
class Joueur;
class Carte;
class Cagnotte;
class Banque;
class Carte;

class Plateau
{
public:
	Plateau();
	~Plateau();
	void AjouterJoueur(std::string nomJoueur);
    Joueur* GetJoueurActuel();
    std::vector<Joueur*> GetJoueurs();
    void FinirTour();
    Case* GetCase(int);
    Cagnotte* GetCagnotte();
    void JoueurActuelAPerdu();
    bool EstFini();

private:
	std::vector<Case*> _cases;
	std::vector<Joueur*> _joueurs;
	Cagnotte *_cagnotte;
    int _tour;
};

#endif	/* PLATEAU_H */

