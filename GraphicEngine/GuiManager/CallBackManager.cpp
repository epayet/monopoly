#include "CallBackManager.h"
#include "GraphicEngine/EventHandler/OnClickHandler.h"

CallBackManager::CallBackManager(EVENTTYPE eventType, void (*callBack)(GraphicEngineOwner*), GraphicEngineOwner* gOwner, GuiItem* guiItem)
{
	_gOwner = gOwner;
	_callBack = callBack;
	_eventType = eventType;
	
	switch(eventType)
	{
		case ONCLICK:
			_eventHandler = new OnClickHandler(guiItem);
			break;
	}
}

CallBackManager::~CallBackManager()
{
	delete _eventHandler;
}

void CallBackManager::Call()
{
	(*_callBack)(_gOwner);
}

EventHandler* CallBackManager::GetEventHandler()
{
	return _eventHandler;
}