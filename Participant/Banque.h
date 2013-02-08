/* 
 * File:   Banque.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:45
 */

#ifndef BANQUE_H
#define	BANQUE_H

#include "Participant.h"

class Banque : Participant
{
	public:
		Billets FaireMonnaie(Billet *billet);
		Billets FaireMonnaie(Billets billets);
		void InitialiserBillets();
};

#endif	/* BANQUE_H */

