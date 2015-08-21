#include "ActionListener.h"
#include "../EventHandler/OnClickHandler.h"
#include "../EventHandler/MouseOutHandler.h"
#include "../EventHandler/MouseOverHandler.h"
#include "../../GraphicEngine/EventHandler/KeyReleasedHandler.h"

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

ActionListener::ActionListener(EVENTTYPE eventType, sf::Key::Code code, GraphicEngine* graphicEngine)
{
	_graphicEngine = graphicEngine;
    
    switch(eventType)
	{
		case KEYRELEASED:
            _eventHandler = new KeyReleasedHandler(code);
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