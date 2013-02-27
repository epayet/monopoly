/* 
 * File:   Domaine.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef DOMAINE_H
#define	DOMAINE_H

#include "Propriete.h"

class Famille;

class Domaine : public Propriete
{
public:
	bool PeutConstruire();
	void Construire();
	void Detruire();
    void Hypothequer();
	void Agir(Joueur *joueur, BilletManager *billetManager);
    int SommeAPayer();
    std::string GetMessage();
    int GetNombreMaisons();

private:
    int _nombreMaisons;
};

#endif	/* DOMAINE_H */

