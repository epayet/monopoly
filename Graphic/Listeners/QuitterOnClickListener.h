/* 
 * File:   QuitterOnClickListener.h
 * Author: manu
 *
 * Created on 22 février 2013, 08:57
 */

#ifndef QUITTERONCLICKLISTENER_H
#define	QUITTERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class QuitterOnClickListener : public ActionListener
{
	public:
		QuitterOnClickListener(GraphicEngine* graphicEngine);
		void Act(sf::Event);
};

#endif	/* QUITTERONCLICKLISTENER_H */

