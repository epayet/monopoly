/* 
 * File:   Depart.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:44
 */

#ifndef DEPART_H
#define	DEPART_H

#include "Case.h"

class Depart : public Case
{
public:
    Depart(Plateau *plateau, int numero, std::string libelle, int sommeADonner);
    void Agir(Joueur *joueur, BilletManager*);
    std::string GetMessage();
    int SommeAPayer();
    ACTION DoitPayer(Joueur*);
private:
    int _sommeADonner;
};

#endif	/* DEPART_H */

