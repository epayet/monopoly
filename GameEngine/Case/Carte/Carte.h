/* 
 * File:   Carte.h
 * Author: user
 *
 * Created on 27 février 2013, 16:47
 */

#ifndef CARTE_H
#define	CARTE_H

#include "../Case.h"

typedef enum {
    CHANCE, COMMUNAUTE
} TYPECARTE;

class Carte : public Case
{
public:
    Carte(Plateau *plateau, int numero, std::string libelle, TYPECARTE typeCarte);
	virtual void Agir(Joueur *joueur, BilletManager *billetManager) = 0;
    virtual int SommeAPayer();
    std::string GetMessage();
    virtual ACTION DoitPayer(Joueur *joueur);
    virtual std::string GetLibelle();
private:
    TYPECARTE _typeCarte;
    
};

#endif	/* CARTE_H */