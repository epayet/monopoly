/* 
 * File:   Domaine.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:43
 */

#ifndef DOMAINE_H
#define	DOMAINE_H

#include "Propriete.h"

class Famille;

class Domaine : public Propriete
{
public:
    Domaine(Plateau* plateau, int numero, std::string libelle, int valeurHypotheque, int prixAchat, std::vector<int> prixLoyer, Famille* famille);
	bool PeutConstruire();
	void Construire();
    bool PeutDetruire();
	void Detruire();
    void Hypothequer();
    int SommeAPayer();
    std::string GetMessage();
    int GetNombreMaisons();

private:
    int _nombreMaisons;
};

#endif	/* DOMAINE_H */

