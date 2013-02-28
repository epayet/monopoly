/* 
 * File:   FinirTourOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 03:02
 */

#ifndef FINIRTOURONCLICKLISTENER_H
#define	FINIRTOURONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;
class Button;

class FinirTourOnClickListener : public ActionListener
{
public:
    FinirTourOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* FINIRTOURONCLICKLISTENER_H */

