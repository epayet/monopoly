/* 
 * File:   ActionListener.h
 * Author: manu
 *
 * Created on 21 février 2013, 21:21
 */

#ifndef ACTIONLISTENER_H
#define	ACTIONLISTENER_H

#include <cstdio>
#include <SFML/Graphics.hpp>

class GraphicEngine;

class ActionListener
{
public:
    ActionListener(GraphicEngine* graphicEngine = NULL);
    virtual void Act(sf::Event) = 0;
    
protected:
    GraphicEngine* _graphicEngine;
};

#endif	/* ACTIONLISTENER_H */

