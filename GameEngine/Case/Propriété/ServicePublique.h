/* 
 * File:   ServicePublique.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:44
 */

#ifndef SERVICEPUBLIQUE_H
#define	SERVICEPUBLIQUE_H

#include "Propriete.h"

class ServicePublique : Propriete
{
public:
	void Agir(Joueur *joueur);
};

#endif	/* SERVICEPUBLIQUE_H */

