/* 
 * File:   EventHandler.h
 * Author: manu
 *
 * Created on 21 février 2013, 16:38
 */

#ifndef EVENTHANDLER_H
#define	EVENTHANDLER_H

#include <SFML/Graphics.hpp>

class GuiItem;

class EventHandler
{
public:
	EventHandler(GuiItem* guiItem);
	~EventHandler();
	virtual bool IsTriggered(sf::Event) = 0;

protected:
	GuiItem* _guiItem;
};

#endif	/* EVENTHANDLER_H */

