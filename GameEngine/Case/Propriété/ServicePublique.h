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
    ServicePublique(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer, Famille *famille);
	void Agir(Joueur *joueur);
    int SommeAPayer();
    std::string GetMessage();
};

#endif	/* SERVICEPUBLIQUE_H */

