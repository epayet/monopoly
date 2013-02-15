/* 
 * File:   Banque.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:45
 */

#ifndef BANQUE_H
#define	BANQUE_H

#include "Participant.h"

class Banque : public Participant
{
	public:
		BilletManager* FaireMonnaie(BilletManager* billetManager);
		void InitialiserBillets();
};

#endif	/* BANQUE_H */

