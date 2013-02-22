#include "CallBackManager.h"
#include "GraphicEngine/EventHandler/OnClickHandler.h"
#include "GraphicEngine/ActionListeners/ActionListener.h"
#include "GraphicEngine/EventHandler/MouseOverHandler.h"
#include "GraphicEngine/EventHandler/MouseOutHandler.h"

CallBackManager::CallBackManager(EVENTTYPE eventType, ActionListener* actionListener, GuiItem* guiItem)
{
	_actionListener = actionListener;

	switch(eventType)
	{
		case ONCLICK:
			_eventHandler = new OnClickHandler(guiItem);
			break;

		case MOUSEOVER:
			_eventHandler = new MouseOverHandler(guiItem);
			break;

		case MOUSEOUT:
			_eventHandler = new MouseOutHandler(guiItem);
			break;
	}
}

CallBackManager::~CallBackManager()
{
	delete _eventHandler;
	delete _actionListener;
}

void CallBackManager::Call(sf::Event event)
{
	_actionListener->Act(event);
}

EventHandler* CallBackManager::GetEventHandler()
{
	return _eventHandler;
}