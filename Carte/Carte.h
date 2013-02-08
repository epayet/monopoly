/* 
 * File:   Carte.h
 * Author: manu
 *
 * Created on 8 février 2013, 11:54
 */

#ifndef CARTE_H
#define	CARTE_H

#include "TypeCarte.h"
#include "../Participant/Joueur.h"
#include "../Plateau.h"

class Carte
{
public :
	virtual void Agir(Joueur joueur);
private:
	TypeCarte _typeCarte;
	Plateau _plateau;
};

#endif	/* CARTE_H */

