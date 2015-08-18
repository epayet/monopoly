/* 
 * File:   AfficherCacherProprietesOnClickListener.h
 * Author: manu
 *
 * Created on 27 février 2013, 02:54
 */

#ifndef AFFICHERCACHERPROPRIETESONCLICKLISTENER_H
#define	AFFICHERCACHERPROPRIETESONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;
class Button;

class ConstruireOnClickListener : public ActionListener
{
public:
    ConstruireOnClickListener(EVENTTYPE, Button*, GraphicEngine*, Jeu*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
};

#endif	/* AFFICHERCACHERPROPRIETESONCLICKLISTENER_H */

