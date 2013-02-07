/* 
 * File:   Domaine.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef DOMAINE_H
#define	DOMAINE_H

#include "Propriete.h"

class Domaine : Propriete
{
	public : 
		bool PeutConstruire();
		void Construire();
		int Detruire();
		void Agir(Joueur joueur);
};

#endif	/* DOMAINE_H */

