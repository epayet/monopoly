/* 
 * File:   GuiManager.h
 * Author: manu
 *
 * Created on 21 février 2013, 10:15
 */

#ifndef GUIMANAGER_H
#define	GUIMANAGER_H

#include <SFML/Graphics.hpp>
#include <vector>

class GuiItem;

class GuiManager
{
public:
	GuiManager(sf::RenderWindow &window);
	~GuiManager();
	void AddGuiItem(GuiItem* guiItem);
	void HandleEvent(sf::Event event);
	void Draw();
	
private:
	std::vector<GuiItem*> _guiItems;
	sf::RenderWindow &_window;
};

#endif	/* GUIMANAGER_H */

