/* 
 * File:   Payer.h
 * Author: user
 *
 * Created on 28 février 2013, 14:17
 */


#ifndef PAYER_H
#define	PAYER_H

#include "Carte.h"

class Payer : public Carte
{
public:
    Payer(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int sommeAPayer);
	void Agir(Joueur *joueur, BilletManager *billetManager);
    int SommeAPayer();
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
private:
    TYPECARTE _typeCarte;
    int _sommeAPayer;
    
};


#endif	/* PAYER_H */

