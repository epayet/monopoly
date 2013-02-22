/* 
 * File:   Propriété.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef PROPRIETE_H
#define	PROPRIETE_H

#include "../Case.h"
class Joueur;

class Propriete : Case
{
public:
	Propriete(int numero);
	~Propriete();
	int Hypothequer();
	int LeverHypotheque();
	void Acheter(Joueur *joueur);

};

#endif	/* PROPRIETE_H */

