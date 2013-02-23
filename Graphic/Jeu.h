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

class GraphicEngine;
class Plateau;
class Pion;
class Joueur;

class Jeu
{
public:
	Jeu();
	~Jeu();
	void Run();
	Plateau* GetPlateau();
    void SetNbJoueurs(int nbJoueurs);
    void UpdateJoueurActuel();
    void SetPositionJoueur(Joueur* joueur);

private:
	GraphicEngine* _graphicEngine;
	Plateau* _plateau;
    int _nbJoueurs;
    std::vector<Pion*> _pions;
};

#endif	/* JEU_H */

