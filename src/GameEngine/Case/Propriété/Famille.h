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
            Famille(std::string couleur, int prixMaisons, std::vector<Propriete*> proprietes);
            Famille(std::string couleur, int prixMaisons);
            void AjouterPropriete(Propriete* propriete);
            int GetPrixMaisons();
            std::vector<Propriete*> GetProprietes();
    private:
            std::string _couleur;
            std::vector<Propriete*> _proprietes;
            int _prixMaisons;
};

#endif	/* FAMILLE_H */

