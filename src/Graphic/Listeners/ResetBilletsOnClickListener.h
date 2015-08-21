/* 
 * File:   ResetBilletsOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 00:53
 */

#ifndef RESETBILLETSONCLICKLISTENER_H
#define	RESETBILLETSONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;
class Button;

class ResetBilletsOnClickListener : public ActionListener
{
    public:
        ResetBilletsOnClickListener(EVENTTYPE, Button* resetBouton, GraphicEngine* graphicEngine, Jeu* jeu);
        void Act(sf::Event);
        
private:
    Jeu* _jeu;
};

#endif	/* RESETBILLETSONCLICKLISTENER_H */

