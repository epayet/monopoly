/* 
 * File:   OuiPayerOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 01:00
 */

#ifndef OUIPAYERONCLICKLISTENER_H
#define	OUIPAYERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Button;
class Jeu;

class OuiPayerOnClickListener : public ActionListener
{
public:
    OuiPayerOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* OUIPAYERONCLICKLISTENER_H */

