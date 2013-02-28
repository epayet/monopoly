/* 
 * File:   FaireMonnaieOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 02:41
 */

#ifndef FAIREMONNAIEONCLICKLISTENER_H
#define	FAIREMONNAIEONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Button;
class Jeu;

class FaireMonnaieOnClickListener : public ActionListener
{
public:
    FaireMonnaieOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* FAIREMONNAIEONCLICKLISTENER_H */

