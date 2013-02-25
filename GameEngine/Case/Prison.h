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
            Prison(Plateau *plateau, int numero, std::string libelle);
            void Agir(Joueur *joueur);
            ACTION DoitPayer();
            
    private:
            Emprisonnes _emprisonnes;
};

#endif	/* PRISON_H */

