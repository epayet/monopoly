/* 
 * File:   Taxe.h
 * Author: manu
 *
 * Created on 7 février 2013, 17:00
 */

#ifndef TAXE_H
#define	TAXE_H

#include "Case.h"

class Taxe : public Case
{
    public:
            Taxe(Plateau *plateau, int numero, std::string libelle, int sommeAPayer);
            void Agir(Joueur *joueur, BilletManager *billetManager);
            std::string GetMessage();
            ACTION DoitPayer(Joueur*);
            int SommeAPayer();
    private:
        int _sommeAPayer;
};

#endif	/* TAXE_H */

