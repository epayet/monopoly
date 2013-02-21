#include "OnClickHandler.h"
#include "../GuiManager/GuiItem/GuiItem.h"

OnClickHandler::OnClickHandler(GuiItem* guiItem) : EventHandler(guiItem)
{
	
}

bool OnClickHandler::IsTriggered(sf::Event event)
{
	return event.Type == sf::Event::MouseButtonPressed && event.MouseButton.X >= _guiItem->GetX() && event.MouseButton.X <= _guiItem->GetSizeX() + _guiItem->GetX() 
            && event.MouseButton.Y >= _guiItem->GetY() && event.MouseButton.Y <= _guiItem->GetY() + _guiItem->GetSizeY();
}