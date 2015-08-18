/* 
 * File:   AllerPrison.h
 * Author: user
 *
 * Created on 28 février 2013, 14:19
 */


#ifndef ALLERPRISON_H
#define	ALLERPRISON_H

#include "Carte.h"

class AllerPrison : public Carte
{
public:
    AllerPrison(Plateau *plateau, std::string libelle, TYPECARTE typeCarte);
	void Agir(Joueur *joueur, BilletManager*);
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
private:
    TYPECARTE _typeCarte;
    
};


#endif	/* ALLERPRISON_H */

