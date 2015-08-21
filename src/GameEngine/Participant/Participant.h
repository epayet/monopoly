/* 
 * File:   Participant.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:28
 */

#ifndef PARTICIPANT_H
#define	PARTICIPANT_H

#include "../Billet/BilletManager.h"
#include <string>

class Plateau;

class Participant
{
public:
	Participant(Plateau *plateau, std::string nom = "");
	~Participant();
	virtual BilletManager* Payer(int somme);
	void Crediter(BilletManager *billetManager);
	virtual void InitialiserBillets() = 0;
	int SommeBillets();
	std::string GetNom();
	BilletManager* GetBilletManager();

protected:
	BilletManager* _billetManager;
	std::string _nom;
    Plateau *_plateau;
};

#endif	/* PARTICIPANT_H */

