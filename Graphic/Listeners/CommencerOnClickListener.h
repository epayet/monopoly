/* 
 * File:   CommencerOnClickListener.h
 * Author: manu
 *
 * Created on 22 février 2013, 14:14
 */

#ifndef COMMENCERONCLICKLISTENER_H
#define	COMMENCERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;

class CommencerOnClickListener : public ActionListener
{
public:
	CommencerOnClickListener(GraphicEngine* graphicEngine, Jeu* jeu);
	void Act(sf::Event);

private:
	Jeu* _jeu;
};

#endif	/* COMMENCERONCLICKLISTENER_H */

