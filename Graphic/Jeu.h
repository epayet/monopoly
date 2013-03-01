/* 
 * File:   Jeu.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:50
 */

#ifndef JEU_H
#define	JEU_H

#define SIZEWINDOWX 1366
#define SIZEWINDOWY 768

#include <vector>

typedef enum
{
	FIRSTMENU, CHOOSEPLAYER, INGAME
} GAMESTATE;

typedef enum
{
    HYPOTHEQUER, CONSTRUIRE, RIENAPPARTENANCE
}ACTIONAPPARTENANCE;

struct position
{
    int x,y;
};

class GraphicEngine;
class Plateau;
class Pion;
class Joueur;
class BilletManager;
class Propriete;

class Jeu
{
public:
	Jeu();
	~Jeu();
	void Run();
	Plateau* GetPlateau();
    void SetNbJoueurs(int nbJoueurs);
    void UpdateJoueurActuel();
    void UpdatePlateau();
    void UpdateAppartenance();
    void SetPositionJoueur(Joueur* joueur);
    void SetSommeAPayer(int somme);
    void SetBilletACasser(int somme);
    BilletManager* GetBilletManagerARemplir();
    void UpdateSommeAPayer();
    void AfficherVoulezVousPayer(bool);
    void AfficherLancerDes(bool);
    void AfficherSommeAPayer(bool);
    void AfficherActionsPossibles(bool affichFaireMonnaie, bool affichFinirTour = true);
    void UpdateFinirTour();
    int GetSommeAPayer();
    int GetBilletACasser();
    position GetCentreCase(int num);
    Propriete* GetProprieteACliquer();
    void SetProprieteACliquer(Propriete*);
    void SetActionAppartenance(ACTIONAPPARTENANCE);
    ACTIONAPPARTENANCE GetActionAppartenance();

private:
	GraphicEngine* _graphicEngine;
	Plateau* _plateau;
    int _nbJoueurs;
    std::vector<Pion*> _pions;
    BilletManager* _billetManagerARemplir;
    int _sommeAPayer, _billetACasser;
    Propriete* _proprieteACliquer;
    ACTIONAPPARTENANCE _actionAppartenance;
};

#endif	/* JEU_H */

