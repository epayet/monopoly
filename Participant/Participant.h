/* 
 * File:   Participant.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:28
 */

#ifndef PARTICIPANT_H
#define	PARTICIPANT_H

#include "../Billet.h"

class Participant
{
public:
	Participant();
	~Participant();
	Billets Payer(int somme, Participant *crediteur);
	void Crediter(Billets billets);
	virtual void InitialiserBillets();
	int SommeBillets();
	
protected:
	Billets _billets;
};

#endif	/* PARTICIPANT_H */

