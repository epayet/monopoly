/* 
 * File:   Case.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:11
 */

#ifndef CASE_H
#define	CASE_H

class Joueur;

class Case
{
public:
	Case(int numero);
	virtual void Agir(Joueur *joueur);
	int GetNumero();

protected:
	int _numero;
};

#endif	/* CASE_H */

