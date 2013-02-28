/* 
 * File:   Deplacement.h
 * Author: user
 *
 * Created on 28 février 2013, 14:17
 */

#ifndef DEPLACEMENT_H
#define	DEPLACEMENT_H

#include "Carte.h"

class Deplacement : public Carte
{
public:
    Deplacement(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte, int numCaseFinale, bool passeParDepart);
	void Agir(Joueur *joueur);
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
private:
    TYPECARTE _typeCarte;
    int _numeroCaseFinale;
    bool _passeParCaseDepart;
    
};


#endif	/* DEPLACEMENT_H */

