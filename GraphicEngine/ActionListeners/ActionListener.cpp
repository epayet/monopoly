#include "ActionListener.h"
#include "../EventHandler/OnClickHandler.h"
#include "../EventHandler/MouseOutHandler.h"
#include "../EventHandler/MouseOverHandler.h"

ActionListener::ActionListener(EVENTTYPE eventType, GuiItem* guiItem, GraphicEngine* graphicEngine)
{
	_graphicEngine = graphicEngine;
    _guiItem = guiItem;
    
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

ActionListener::~ActionListener()
{
    delete _eventHandler;
}

EventHandler* ActionListener::GetEventHandler()
{
    return _eventHandler;
}