/* 
 * File:   Parc.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:19
 */

#ifndef PARC_H
#define	PARC_H

#include "Case.h"

class Parc : public Case
{
public:
    Parc(Plateau *plateau, int numero, std::string libelle);
	void Agir(Joueur *joueur, BilletManager*);
    std::string GetMessage();
    ACTION DoitPayer(Joueur*);
};

#endif	/* PARC_H */

