/* 
 * File:   LeverHypothequeOnClickListener.h
 * Author: manu
 *
 * Created on 1 mars 2013, 23:27
 */

#ifndef LEVERHYPOTHEQUEONCLICKLISTENER_H
#define	LEVERHYPOTHEQUEONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Button;
class Jeu;

class LeverHypothequeOnClickListener : public ActionListener
{
public:
    LeverHypothequeOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;

};

#endif	/* LEVERHYPOTHEQUEONCLICKLISTENER_H */

