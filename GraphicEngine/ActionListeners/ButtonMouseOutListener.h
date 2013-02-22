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
	ButtonMouseOutListener(Button* button);
	void Act(sf::Event);

private:
	Button* _button;
};

#endif	/* BUTTONMOUSEOUTLISTENER_H */

