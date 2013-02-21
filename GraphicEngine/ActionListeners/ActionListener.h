/* 
 * File:   ActionListener.h
 * Author: manu
 *
 * Created on 21 février 2013, 21:21
 */

#ifndef ACTIONLISTENER_H
#define	ACTIONLISTENER_H

#include <cstdio>

class GraphicEngine;

class ActionListener
{
public:
    ActionListener(GraphicEngine* graphicEngine = NULL);
    virtual void Act() = 0;
    
protected:
    GraphicEngine* _graphicEngine;
};

#endif	/* ACTIONLISTENER_H */

