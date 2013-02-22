/* 
 * File:   Jeu.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:50
 */

#ifndef JEU_H
#define	JEU_H

#define SIZEWINDOWX 1024
#define SIZEWINDOWY 768

typedef enum
{
	FIRSTMENU, CHOOSEPLAYER, INGAME
} GAMESTATE;

class GraphicEngine;
class Plateau;

class Jeu
{
public:
	Jeu();
	~Jeu();
    void Run();

private:
    GraphicEngine* _graphicEngine;
	Plateau* _plateau;
};

#endif	/* JEU_H */

