/* 
 * File:   PayeBanque.h
 * Author: user
 *
 * Created on 28 février 2013, 14:18
 */

#ifndef ESTPAYEPARBANQUE_H
#define	ESTPAYEPARBANQUE_H

#include "Carte.h"

class EstPayeParBanque : public Carte
{
public:
    EstPayeParBanque(Plateau *plateau, std::string libelle, TYPECARTE typeCarte, int somme);
	void Agir(Joueur *joueur, BilletManager *billetManager);
    std::string GetMessage();
    ACTION DoitPayer(Joueur *joueur);
private:
    TYPECARTE _typeCarte;
    int _sommeADonner;
    
};

#endif	/* PAYEBANQUE_H */

