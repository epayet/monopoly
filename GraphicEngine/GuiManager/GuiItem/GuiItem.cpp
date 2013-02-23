#include "GuiItem.h"
#include "../CallBackManager.h"
#include "GraphicEngine/EventHandler/EventHandler.h"
#include "GraphicEngine/ActionListeners/ActionListener.h"

GuiItem::GuiItem(sf::RenderWindow& window, int state, int x, int y, int sizex, int sizey) : _window(window)
{
	_x = x;
	_y = y;
	_sizex = sizex;
	_sizey = sizey;

	_state = state;
    
    _canDraw = true;
}

GuiItem::~GuiItem()
{
	for(int i = 0; i < _listeners.size(); i++)
	{
		delete _listeners[i];
	}
}

void GuiItem::AddListener(ActionListener* actionListener)
{
	_listeners.push_back(actionListener);
}

void GuiItem::HandleEvent(sf::Event event, int state)
{
	for(int i = 0; i < _listeners.size(); i++)
	{
		if(_state == state && _listeners[i]->GetEventHandler()->IsTriggered(event))
			_listeners[i]->Act(event);
	}
}

int GuiItem::GetX()
{
	return _x;
}

int GuiItem::GetY()
{
	return _y;
}

void GuiItem::SetX(int x)
{
    _x = x;
}

void GuiItem::SetY(int y)
{
    _y = y;
}

int GuiItem::GetSizeX()
{
	return _sizex;
}

int GuiItem::GetSizeY()
{
	return _sizey;
}

void GuiItem::SetCanDraw(bool canDraw)
{
    _canDraw = canDraw;
}

bool GuiItem::CanDraw(int state)
{
    return _state == state && _canDraw;
}