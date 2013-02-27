/* 
 * File:   ValiderBilletsOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 00:57
 */

#ifndef VALIDERBILLETSONCLICKLISTENER_H
#define	VALIDERBILLETSONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;
class Button;

class ValiderBilletsOnClickListener : public ActionListener
{
public:
    ValiderBilletsOnClickListener(EVENTTYPE, Button* validerBouton, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* VALIDERBILLETSONCLICKLISTENER_H */

