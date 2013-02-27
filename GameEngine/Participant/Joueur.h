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
	Joueur(std::string nom);
	~Joueur();
	void Avancer(int);
	void Acheter(Propriete *propriete);
	bool PeutPayer(int somme);
	void Construire(Propriete *propriete);
	void Detruire(Propriete *propriete);
	void Hypothequer(Propriete *propriete);
	void LeverHypotheque(Propriete *propriete, BilletManager* billetManager);
	void Placer(Case *caseAPlacer, bool passerParDepart = true);
	void InitialiserBillets();
	int GetPosition();
    bool PossedeCarteSortirPrison();         //booléen comme ça on sait pas comment c'est géré à l'intérieur (int)
    void AjouterCarteSortirPrison();
    void EnleverCarteSortirPrison();
    bool AFaitDouble();
    void SetAFaitDouble(int de1, int de2);
    int GetNbTours();
    int GetDerniersDes();

private:
	int _position;
	std::vector<Propriete*> _proprietes;
	void GagnerArgentCaseDepart();
    int _tour;
    int _nombreCartesSortirPrison;
    int _nbDoubles;
    int _derniersDes;
};

#endif	/* JOUEUR_H */

