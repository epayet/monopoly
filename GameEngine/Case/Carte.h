/* 
 * File:   Carte.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:57
 */

#ifndef CARTE_H
#define	CARTE_H

#include "Case.h"

class Carte : Case
{
public:
	void Agir(Joueur *joueur);
};

#endif	/* CARTE_H */

