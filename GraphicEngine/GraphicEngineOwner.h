/* 
 * File:   GraphicEngineOwner.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:50
 */

#ifndef GRAPHICENGINEOWNER_H
#define	GRAPHICENGINEOWNER_H

#include <SFML/Graphics.hpp>

class GraphicEngine;

class GraphicEngineOwner
{
public:
	GraphicEngineOwner(int sizex, int sizey, std::string windowName);
	~GraphicEngineOwner();
	GraphicEngine* GetGraphicEngine();
	virtual void Run();
	
protected :
	sf::RenderWindow _window;
	GraphicEngine* _graphicEngine;
};

#endif	/* GRAPHICENGINEOWNER_H */

