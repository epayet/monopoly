#include "OnClickHandler.h"
#include "../GuiManager/GuiItem/GuiItem.h"

OnClickHandler::OnClickHandler(GuiItem* guiItem) : EventHandler(guiItem)
{
	
}

bool OnClickHandler::IsTriggered(sf::Event event)
{
	return false;
}