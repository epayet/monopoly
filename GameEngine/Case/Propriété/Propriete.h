/* 
 * File:   Propriété.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef PROPRIETE_H
#define	PROPRIETE_H

#include "../Case.h"

class Propriete : public Case
{
    public:
            Propriete(Plateau *plateau, int numero, std::string libelle);
            virtual void Agir(Joueur *joueur, BilletManager *billetManager);  //redéfinit Agir de Case mais sera redéfin par Domaine Gare et Service Publique
            int Hypothequer();
            int LeverHypotheque();
        	void Acheter(Joueur *joueur);
            ACTION DoitPayer(Joueur *joueur);
            virtual int SommeAPayer();
    protected:
        Joueur *_proprietaire;

};

#endif	/* PROPRIETE_H */

