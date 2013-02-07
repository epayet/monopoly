/* 
 * File:   Case.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:11
 */

#ifndef CASE_H
#define	CASE_H

#include "../Participant/Joueur.h"

class Case
{
public:
	Case();
	virtual void Agir(Joueur joueur);

protected:
	int Numero;
};

#endif	/* CASE_H */

