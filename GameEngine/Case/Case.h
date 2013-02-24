/* 
 * File:   Case.h
 * Author: manu
 *
 * Created on 7 février 2013, 16:11
 */

#ifndef CASE_H
#define	CASE_H

#include <cstdlib>
#include <string>

class Joueur;
class Plateau;
class BilletManager;
typedef enum {
    DOITPAYER, DOITETREPAYE, PEUTACHETER, RIEN
} ACTION;


class Case
{
public:
	Case(Plateau *plateau, int numero, std::string libelle);
	virtual void Agir(Joueur *joueur, BilletManager *billetManager = NULL) = 0;
	int GetNumero();
    virtual std::string GetMessage() = 0;   //Retourne le message des actions possibles (ex : "vous pouvez acheter ce terrain")
    virtual int SommeAPayer() = 0;
    virtual ACTION DoitPayer(Joueur *joueur = NULL) = 0;    //enum doitPayer, peutAcheter, doitEtrePaye rien.    

protected:
	int _numero;
    std::string _libelle;
    Plateau *_plateau;
};

#endif	/* CASE_H */

