/* 
 * File:   OnClickHandler.h
 * Author: manu
 *
 * Created on 21 février 2013, 17:00
 */

#ifndef ONCLICKHANDLER_H
#define	ONCLICKHANDLER_H

#include <SFML/Graphics.hpp>

#include "EventHandler.h"

class OnClickHandler : public EventHandler
{
	public :
		OnClickHandler(GuiItem* guiItem);
		bool IsTriggered(sf::Event);
};

#endif	/* ONCLICKHANDLER_H */

