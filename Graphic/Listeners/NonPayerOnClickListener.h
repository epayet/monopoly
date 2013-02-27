/* 
 * File:   NonPayerOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 01:01
 */

#ifndef NONPAYERONCLICKLISTENER_H
#define	NONPAYERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Button;
class Jeu;

class NonPayerOnClickListener : public ActionListener
{
public:
    NonPayerOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* NONPAYERONCLICKLISTENER_H */

