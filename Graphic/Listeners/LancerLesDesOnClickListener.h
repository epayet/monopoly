/* 
 * File:   LancerLesDesOnClickListener.h
 * Author: manu
 *
 * Created on 23 février 2013, 16:49
 */

#ifndef LANCERLESDESONCLICKLISTENER_H
#define	LANCERLESDESONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"
class Button;
class Jeu;

class LancerLesDesOnClickListener :  public ActionListener
{
    public:
        LancerLesDesOnClickListener(EVENTTYPE, Button* lancerLesDesBouton, GraphicEngine* graphicEngine, Jeu* jeu);
        void Act(sf::Event);
        void SetImageDe(std::string deKey, int de);
        
private :
    Jeu* _jeu;
};

#endif	/* LANCERLESDESONCLICKLISTENER_H */

