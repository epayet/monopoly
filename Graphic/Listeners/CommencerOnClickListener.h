/* 
 * File:   CommencerOnClickListener.h
 * Author: manu
 *
 * Created on 22 février 2013, 14:14
 */

#ifndef COMMENCERONCLICKLISTENER_H
#define	COMMENCERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class CommencerOnClickListener : public ActionListener
{
	public:
		CommencerOnClickListener(GraphicEngine* graphicEngine);
		void Act(sf::Event);
};

#endif	/* COMMENCERONCLICKLISTENER_H */

