/* 
 * File:   CallBackManager.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:28
 */

#ifndef CALLBACKMANAGER_H
#define	CALLBACKMANAGER_H

class GraphicEngineOwner;
class EventHandler;
class GuiItem;

typedef enum 
{
	ONCLICK
} EVENTTYPE;

class CallBackManager
{
public:
	CallBackManager(EVENTTYPE eventType, void (*callBack)(GraphicEngineOwner*), GraphicEngineOwner* gOwner, GuiItem* guiItem);
	~CallBackManager();
	EventHandler* GetEventHandler();
	void Call();
	
private :
	void (*_callBack)(GraphicEngineOwner*);
	GraphicEngineOwner* _gOwner;
	EVENTTYPE _eventType;
	EventHandler* _eventHandler;
};

#endif	/* CALLBACKMANAGER_H */

