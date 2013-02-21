/* 
 * File:   GraphicEngine.h
 * Author: manu
 *
 * Created on 21 février 2013, 10:14
 */

#ifndef GRAPHICENGINE_H
#define	GRAPHICENGINE_H

#include <SFML/Graphics.hpp>

class GuiManager;

class GraphicEngine
{
public:
	GraphicEngine(sf::RenderWindow &window);
	~GraphicEngine();
	GuiManager* GetGuiManager();
	void HandleEvent(sf::Event event);
	void Draw();
	sf::RenderWindow &GetWindow();
	
private:
	GuiManager* _guiManager;
	sf::RenderWindow &_window;
};

#endif	/* GRAPHICENGINE_H */

