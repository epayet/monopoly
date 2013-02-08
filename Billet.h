/* 
 * File:   Billet.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:46
 */

#ifndef BILLET_H
#define	BILLET_H

#include <cstdlib>
#include <cstdio>
#include <map>
#include <vector>


class Billet
{
public:
	Billet(int valeur);
	int GetValeur();
private:
	int Valeur;
};

typedef std::pair<int, Billet*> NbBillets;
typedef std::vector<NbBillets> Billets;

#endif	/* BILLET_H */

