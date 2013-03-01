/* 
 * File:   AppartenanceOnClickListener.h
 * Author: manu
 *
 * Created on 28 février 2013, 16:19
 */

#ifndef APPARTENANCEONCLICKLISTENER_H
#define	APPARTENANCEONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Appartenance;
class Jeu;
class Propriete;

class AppartenanceOnClickListener : public ActionListener
{
public:
    AppartenanceOnClickListener(EVENTTYPE, Appartenance*, GraphicEngine*, Jeu*, Propriete*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
    Propriete* _propriete;
};

#endif	/* APPARTENANCEONCLICKLISTENER_H */

