/* 
 * File:   BilletOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 01:03
 */

#ifndef BILLETONCLICKLISTENER_H
#define	BILLETONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"
#include "GameEngine/Billet/BilletManager.h"

class Image;
class Jeu;

class BilletOnClickListener : public ActionListener
{
public:
    BilletOnClickListener(EVENTTYPE, Image*, GraphicEngine*, Jeu*, TYPEBILLET billet);
    void Act(sf::Event);

private:
    Jeu* _jeu;
    TYPEBILLET _billet;
};

#endif	/* BILLETONCLICKLISTENER_H */

