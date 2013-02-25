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
	void Agir(Joueur *joueur);
    std::string GetMessage();
    //int SommeAPayer();
    ACTION DoitPayer();
};

#endif	/* ARRESTATION_H */

