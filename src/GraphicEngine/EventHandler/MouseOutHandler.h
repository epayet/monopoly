/* 
 * File:   MouseOutHandler.h
 * Author: manu
 *
 * Created on 22 février 2013, 00:00
 */

#ifndef MOUSEOUTHANDLER_H
#define	MOUSEOUTHANDLER_H

#include "EventHandler.h"

class MouseOutHandler : public EventHandler
{
public:
	MouseOutHandler(GuiItem* guiItem);
	bool IsTriggered(sf::Event);
};

#endif	/* MOUSEOUTHANDLER_H */

