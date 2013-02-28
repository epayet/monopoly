/* 
 * File:   Carte.h
 * Author: user
 *
 * Created on 27 février 2013, 16:47
 */

#ifndef CARTE_H
#define	CARTE_H

#include "../Case.h"

class Joueur;

typedef enum {
    CHANCE, COMMUNAUTE
} TYPECARTE;

class Carte : public Case
{
public:
	void Agir(Joueur *joueur, BilletManager *billetManager);
private:
    TYPECARTE _typeCarte;
};

#endif	/* CARTE_H */