/* 
 * File:   JouerOnClickListener.h
 * Author: manu
 *
 * Created on 21 février 2013, 21:42
 */

#ifndef JOUERONCLICKLISTENER_H
#define	JOUERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Button;

class JouerOnClickListener : public ActionListener
{
public:
	JouerOnClickListener(EVENTTYPE, Button* jouerBouton, GraphicEngine* graphicEngine);
	void Act(sf::Event);

private:

};

#endif	/* JOUERONCLICKLISTENER_H */

