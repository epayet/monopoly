/* 
 * File:   Domaine.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef DOMAINE_H
#define	DOMAINE_H

#include "Propriete.h"
class Couleur;

class Domaine : public Propriete
{
public:
	bool PeutConstruire();
	void Construire();
	int Detruire();
	void Agir(Joueur *joueur);

private:
	Couleur *_couleur;
};

#endif	/* DOMAINE_H */

