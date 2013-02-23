/* 
 * File:   ActionListener.h
 * Author: manu
 *
 * Created on 21 février 2013, 21:21
 */

#ifndef ACTIONLISTENER_H
#define	ACTIONLISTENER_H

#include <cstdio>
#include <SFML/Graphics.hpp>

typedef enum
{
	ONCLICK, MOUSEOVER, MOUSEOUT
} EVENTTYPE;

class GraphicEngine;
class GuiItem;
class EventHandler;

class ActionListener
{
public:
	ActionListener(EVENTTYPE, GuiItem*, GraphicEngine* graphicEngine = NULL);
    ~ActionListener();
	virtual void Act(sf::Event) = 0;
    EventHandler* GetEventHandler();

protected:
	GraphicEngine* _graphicEngine;
	EventHandler* _eventHandler;
    GuiItem* _guiItem;
};

#endif	/* ACTIONLISTENER_H */

