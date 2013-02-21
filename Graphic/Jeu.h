/* 
 * File:   Jeu.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:50
 */

#ifndef JEU_H
#define	JEU_H

#define SIZEWINDOWX 800
#define SIZEWINDOWY 600

class GraphicEngine;

class Jeu
{
public:
	Jeu();
	~Jeu();
    void Run();

private:
    GraphicEngine* _graphicEngine;
};

#endif	/* JEU_H */

