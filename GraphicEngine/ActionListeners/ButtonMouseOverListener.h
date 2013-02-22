/* 
 * File:   ButtonMouseOverListener.h
 * Author: manu
 *
 * Created on 21 février 2013, 23:44
 */

#ifndef BUTTONMOUSEOVERLISTENER_H
#define	BUTTONMOUSEOVERLISTENER_H

#include "ActionListener.h"

class Button;

class ButtonMouseOverListener : public ActionListener
{
public:
	ButtonMouseOverListener(Button* button);
	void Act(sf::Event);

private:
	Button *_button;
};

#endif	/* BUTTONMOUSEOVERLISTENER_H */

