/* 
 * File:   ButtonMouseOutListener.h
 * Author: manu
 *
 * Created on 22 février 2013, 00:03
 */

#ifndef BUTTONMOUSEOUTLISTENER_H
#define	BUTTONMOUSEOUTLISTENER_H

#include "ActionListener.h"

class Button;

class ButtonMouseOutListener : public ActionListener
{
public:
	ButtonMouseOutListener(EVENTTYPE, Button* button);
	void Act(sf::Event);
};

#endif	/* BUTTONMOUSEOUTLISTENER_H */

