/* 
 * File:   Arrestation.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:24
 */

#ifndef ARRESTATION_H
#define	ARRESTATION_H

#include "Case.h"

class Prison;

class Arrestation : public Case
{
public:
    Arrestation(Plateau *plateau, int numero, std::string libelle);
	void Agir(Joueur *joueur, BilletManager*);
    std::string GetMessage();
    int SommeAPayer();
    ACTION DoitPayer(Joueur*);
};

#endif	/* ARRESTATION_H */

