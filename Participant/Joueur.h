/* 
 * File:   Joueur.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:28
 */

#ifndef JOUEUR_H
#define	JOUEUR_H

#include "Participant.h"
#include <cstdlib>
#include <vector>

class Propriete;
class Case;

class Joueur : Participant
{
public:
	Joueur();
	~Joueur();
	void Avancer();
	void Acheter(Propriete *propriete);
	bool PeutPayer(int somme);
	void Construire(Propriete *propriete);
	void Detruire(Propriete *propriete);
	void Hypothequer(Propriete *propriete);
	void LeverHypotheque(Propriete *propriete);
	void Placer(Case *caseAPlacer);
	void InitialiserBillets();

private:
	std::vector<Propriete*> _proprietes;
};

#endif	/* JOUEUR_H */

