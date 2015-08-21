/* 
 * File:   FinirTourKeyReleasedListener.h
 * Author: manu
 *
 * Created on 28 février 2013, 14:52
 */

#ifndef FINIRTOURKEYRELEASEDLISTENER_H
#define	FINIRTOURKEYRELEASEDLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;

class FinirTourKeyReleasedListener : public ActionListener
{
public:
    FinirTourKeyReleasedListener(EVENTTYPE, sf::Key::Code, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* FINIRTOURKEYRELEASEDLISTENER_H */

