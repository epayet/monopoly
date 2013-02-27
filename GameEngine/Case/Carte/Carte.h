/* 
 * File:   Carte.h
 * Author: user
 *
 * Created on 27 février 2013, 16:47
 */

#ifndef CARTE_H
#define	CARTE_H

#include "../Case.h"
#include "TypeCarte.h"

class TypeCarte;

class Carte : public Case
{
public:
	void Agir(Joueur *joueur);
private:
    TypeCarte *_typeCarte;
};

#endif	/* CARTE_H */