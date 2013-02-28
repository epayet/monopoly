/* 
 * File:   Prison.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:42
 */

#ifndef PRISON_H
#define	PRISON_H
#include <vector>
#include "Case.h"

class Prison : public Case
{
    typedef std::pair<Joueur*, int> Prisonnier;    //Dico avec {joueur, nbToursPassesEnPrison}
    typedef std::vector<Prisonnier> Emprisonnes;
    
    
    public:
            Prison(Plateau *plateau, int numero, std::string libelle, int prixSortie);
            void Agir(Joueur *joueur, BilletManager *billetManager);
            std::string GetMessage();
            int SommeAPayer();
            ACTION DoitPayer(Joueur *joueur);
            void AjouterPrisonnier(Joueur *joueur);
            bool EstEnPrison(Joueur *joueur);
            
    private:
            Emprisonnes _emprisonnes;
            int _prixSortie;
            void AjouterNbToursPasses(Joueur *joueur);
};

#endif	/* PRISON_H */

