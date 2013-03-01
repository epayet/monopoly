/* 
 * File:   SortirPrison.h
 * Author: user
 *
 * Created on 28 février 2013, 14:19
 */

#ifndef SORTIRPRISON_H
#define	SORTIRPRISON_H

#include "Carte.h"

class SortirPrison : public Carte
{
public:
    SortirPrison(Plateau *plateau, std::string libelle, TYPECARTE typeCarte);
	void Agir(Joueur *joueur);
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
private:
    TYPECARTE _typeCarte;
    
};

#endif	/* SORTIRPRISON_H */

