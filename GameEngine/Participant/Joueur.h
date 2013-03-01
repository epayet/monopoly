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
class Domaine;

class Joueur : public Participant
{
public:
	Joueur(Plateau *plateau, std::string nom);
	void Avancer(int);
    void Avancer(int de1, int de2);
	void Acheter(Propriete *propriete);
	bool PeutPayer(int somme);
	void Construire(Domaine*);
	void Detruire(Domaine*);
	void Hypothequer(Propriete *propriete);
	void LeverHypotheque(Propriete *propriete, BilletManager* billetManager);
	void Placer(Case *caseAPlacer, bool passerParDepart = true);
	void InitialiserBillets();
	int GetPosition();
    bool PossedeCarteSortirPrison();         
    void AjouterCarteSortirPrison();
    void EnleverCarteSortirPrison();
    bool AFaitDouble();
    void SetAFaitDouble(int de1, int de2);
    int GetNbTours();
    int GetDerniersDes();
    void Perdre();
    bool APerdu();
    bool PeutConstruire();
    std::vector<Propriete*> GetProprietes();
    bool PeutHypothequer();
    bool PeutLeverHypotheque();

private:
	int _position;
	std::vector<Propriete*> _proprietes;
	void GagnerArgentCaseDepart();
    int _tour;
    int _nombreCartesSortirPrison;
    int _nbDoubles;
    int _derniersDes;
    bool _aPerdu;
};

#endif	/* JOUEUR_H */

