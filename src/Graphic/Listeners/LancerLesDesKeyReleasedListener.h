/* 
 * File:   LancerLesDesKeyReleasedListener.h
 * Author: manu
 *
 * Created on 1 mars 2013, 22:22
 */

#ifndef LANCERLESDESKEYRELEASEDLISTENER_H
#define	LANCERLESDESKEYRELEASEDLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;

class LancerLesDesKeyReleasedListener : public ActionListener
{
public:
    LancerLesDesKeyReleasedListener(EVENTTYPE, sf::Key::Code, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* LANCERLESDESKEYRELEASEDLISTENER_H */

