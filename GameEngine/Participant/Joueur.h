/* 
 * File:   Joueur.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:28
 */

#ifndef JOUEUR_H
#define	JOUEUR_H

#include "Participant.h"
#include <vector>

class Propriete;
class Case;

class Joueur : public Participant
{
public:
	Joueur();
	~Joueur();
	void Avancer(int valeur);
	void Acheter(Propriete *propriete);
	bool PeutPayer(int somme);
	void Construire(Propriete *propriete);
	void Detruire(Propriete *propriete);
	void Hypothequer(Propriete *propriete);
	void LeverHypotheque(Propriete *propriete, BilletManager* billetManager);
	void Placer(Case *caseAPlacer, bool passerParDepart = true);
	void InitialiserBillets();
	int GetPosition();

private:
	int _position;
	std::vector<Propriete*> _proprietes;
	void GagnerArgentCaseDepart();
};

#endif	/* JOUEUR_H */

