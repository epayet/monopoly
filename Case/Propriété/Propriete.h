/* 
 * File:   Propriété.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef PROPRIETE_H
#define	PROPRIETE_H

#include "../Case.h"
#include "../../Participant/Joueur.h"

class Propriete : Case
{
	public :
		int Hypothequer();
		void LeverHypotheque();
		void Acheter(Joueur joueur);
};

#endif	/* PROPRIETE_H */

