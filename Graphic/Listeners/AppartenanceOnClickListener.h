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
class Domaine;

class AppartenanceOnClickListener : public ActionListener
{
public:
    AppartenanceOnClickListener(EVENTTYPE, Appartenance*, GraphicEngine*, Jeu*, Domaine*);
    void Act(sf::Event);

private:
    Jeu* _jeu;
    Domaine* _domaine;
};

#endif	/* APPARTENANCEONCLICKLISTENER_H */

