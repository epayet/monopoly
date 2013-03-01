/* 
 * File:   HypothequerOnClickListener.h
 * Author: manu
 *
 * Created on 1 mars 2013, 11:32
 */

#ifndef HYPOTHEQUERONCLICKLISTENER_H
#define	HYPOTHEQUERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Button;
class Jeu;

class HypothequerOnClickListener : public ActionListener
{
public:
    HypothequerOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* HYPOTHEQUERONCLICKLISTENER_H */

