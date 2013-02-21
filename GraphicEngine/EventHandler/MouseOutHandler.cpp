#include "MouseOutHandler.h"
#include "MouseOverHandler.h"

MouseOutHandler::MouseOutHandler(GuiItem* guiItem) : EventHandler(guiItem)
{
    
}

bool MouseOutHandler::IsTriggered(sf::Event event)
{
    MouseOverHandler* mouseOverHandler = new MouseOverHandler(_guiItem);
    bool isTriggered = !mouseOverHandler->IsTriggered(event);
    
    delete mouseOverHandler;
    
    return isTriggered;
}
