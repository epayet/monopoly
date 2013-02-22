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

typedef std::pair<std::string, GuiItem*> GuiItemDictonnary;

class GuiManager
{
public:
	GuiManager(sf::RenderWindow &window);
	~GuiManager();
	void AddGuiItem(std::string key, GuiItem* guiItem);
	void HandleEvent(sf::Event event, int state);
	void Draw(int state);
	GuiItem* GetGuiItem(std::string key);

private:
	std::vector<GuiItemDictonnary> _guiItems;
	sf::RenderWindow &_window;
};

#endif	/* GUIMANAGER_H */

