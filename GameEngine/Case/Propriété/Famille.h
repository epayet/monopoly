/* 
 * File:   Couleur.h
 * Author: manu
 *
 * Created on 8 février 2013, 11:29
 */

#ifndef FAMILLE_H
#define	FAMILLE_H
#include <string>
#include <vector>

class Propriete;

class Famille
{
    public:
            Famille(std::string couleur, std::vector<Propriete*> proprietes = NULL);
            void AjouterPropriete(Propriete* propriete);
    private:
            std::string _couleur;
            std::vector<Propriete*> _proprietes;
};

#endif	/* FAMILLE_H */

