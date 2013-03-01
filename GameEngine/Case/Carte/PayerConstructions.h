/* 
 * File:   PayerConstructions.h
 * Author: user
 *
 * Created on 28 février 2013, 14:20
 */

#ifndef PAYERCONSTRUCTIONS_H
#define	PAYERCONSTRUCTIONS_H

#include "Carte.h"

class PayerConstructions : public Carte
{
public:
    PayerConstructions(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int sommeMaisons, int sommeHotels);
	void Agir(Joueur *joueur, BilletManager *billetManager);
    int SommeAPayer();
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
private:
    TYPECARTE _typeCarte;
    int _sommeMaisons;
    int _sommeHotels;
    
};

#endif	/* PAYERCONSTRUCTIONS_H */

