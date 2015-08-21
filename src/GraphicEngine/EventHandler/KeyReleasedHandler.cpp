#include "KeyReleasedHandler.h"

KeyReleasedHandler::KeyReleasedHandler(sf::Key::Code key) : EventHandler()
{
    _key = key;
}

bool KeyReleasedHandler::IsTriggered(sf::Event event)
{
    return (event.Type == sf::Event::KeyReleased) && (event.Key.Code == _key);
}
