#include "MouseOverHandler.h"
#include "GraphicEngine/GuiManager/GuiItem/GuiItem.h"

MouseOverHandler::MouseOverHandler(GuiItem* guiItem) : EventHandler(guiItem)
{

}

bool MouseOverHandler::IsTriggered(sf::Event event)
{
	return event.Type == sf::Event::MouseMoved && event.MouseMove.X >= _guiItem->GetX() && event.MouseMove.X <= _guiItem->GetSizeX() + _guiItem->GetX()
			&& event.MouseMove.Y >= _guiItem->GetY() && event.MouseMove.Y <= _guiItem->GetY() + _guiItem->GetSizeY();
}
