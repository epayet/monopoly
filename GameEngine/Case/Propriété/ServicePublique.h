/* 
 * File:   ServicePublique.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:44
 */

#ifndef SERVICEPUBLIQUE_H
#define	SERVICEPUBLIQUE_H

#include "Propriete.h"

class ServicePublique : public Propriete
{
public:
	void Agir(Joueur *joueur);
    ACTION DoitPayer(Joueur *joueur);
};

#endif	/* SERVICEPUBLIQUE_H */

