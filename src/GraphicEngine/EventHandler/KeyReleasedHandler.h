/* 
 * File:   KeyReleasedHandler.h
 * Author: manu
 *
 * Created on 28 février 2013, 14:28
 */

#ifndef KEYRELEASEDHANDLER_H
#define	KEYRELEASEDHANDLER_H

#include "EventHandler.h"

class KeyReleasedHandler : public EventHandler
{
public:
    KeyReleasedHandler(sf::Key::Code key);
    bool IsTriggered(sf::Event);

private:
    sf::Key::Code _key;
};

#endif	/* KEYRELEASEDHANDLER_H */

