/* 
 * File:   Anniversaire.h
 * Author: user
 *
 * Created on 28 février 2013, 14:19
 */

#ifndef ANNIVERSAIRE_H
#define	ANNIVERSAIRE_H

#include "Carte.h"


class Anniversaire : public Carte
{
public:
    Anniversaire(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte, int somme);
	void Agir(Joueur *joueur, BilletManager *billetManager);
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
    int SommeAPayer();
private:
    TYPECARTE _typeCarte;
    int _sommeADonner;
    
};

#endif	/* ANNIVERSAIRE_H */

