/* 
 * File:   JouerOnClickListener.h
 * Author: manu
 *
 * Created on 21 février 2013, 21:42
 */

#ifndef JOUERONCLICKLISTENER_H
#define	JOUERONCLICKLISTENER_H

#include "../../GraphicEngine/ActionListeners/ActionListener.h"

class Jeu;

class JouerOnClickListener : public ActionListener {
public:
    JouerOnClickListener(GraphicEngine* graphicEngine, Jeu* jeu);
    void Act();

private:
    Jeu* _jeu;
};

#endif	/* JOUERONCLICKLISTENER_H */

