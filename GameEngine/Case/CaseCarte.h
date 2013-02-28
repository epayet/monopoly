/* 
 * File:   CaseCarte.h
 * Author: user
 *
 * Created on 28 février 2013, 10:22
 */

#ifndef CASECARTE_H
#define	CASECARTE_H
#include "Case.h"
#include "Carte/Carte.h"

class CaseCarte : public Case
{
public:
    CaseCarte(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte);
	void Agir(Joueur *joueur, BilletManager *billetManager);
    std::string GetMessage();
    int SommeAPayer();
    ACTION DoitPayer(Joueur *joueur);
    std::string GetLibelle();
private:
    TYPECARTE _typeCarte;
        
};


#endif	/* CASECARTE_H */

