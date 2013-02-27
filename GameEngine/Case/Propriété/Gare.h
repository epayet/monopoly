/* 
 * File:   Gare.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef GARE_H
#define	GARE_H

#include "Propriete.h"

class Gare : public Propriete
{
public:
    Gare(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer);
    int SommeAPayer();
    std::string GetMessage();
};

#endif	/* GARE_H */

