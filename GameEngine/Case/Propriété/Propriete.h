/* 
 * File:   Propriété.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef PROPRIETE_H
#define	PROPRIETE_H

#include "../Case.h"
#include "../../Participant/Joueur.h"

class Propriete : public Case
{
    public:
            Propriete(Plateau *plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer);
            virtual void Agir(Joueur *joueur, BilletManager *billetManager);  //redéfinit Agir de Case mais sera redéfini par Domaine, Gare et Service Publique
            virtual void Hypothequer();
            int LeverHypotheque();
        	void Acheter(Joueur *joueur);
            ACTION DoitPayer(Joueur *joueur);
            virtual int SommeAPayer();
            Joueur *GetProprietaire();
            int GetValeurHypotheque();
            std::string GetMessage();
    protected:
        Joueur *_proprietaire;
        bool _estHypotheque;
        int _valeurHypotheque;
        int _prixAchat;
        std::vector<int> _prixLoyer;

};

#endif	/* PROPRIETE_H */

