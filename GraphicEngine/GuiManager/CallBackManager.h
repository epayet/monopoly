/* 
 * File:   CallBackManager.h
 * Author: manu
 *
 * Created on 21 février 2013, 11:28
 */

#ifndef CALLBACKMANAGER_H
#define	CALLBACKMANAGER_H

class ActionListener;
class EventHandler;
class GuiItem;

typedef enum 
{
	ONCLICK, MOUSEOVER, MOUSEOUT
} EVENTTYPE;

class CallBackManager
{
public:
	CallBackManager(EVENTTYPE eventType, ActionListener* actionListener, GuiItem* guiItem);
	~CallBackManager();
	EventHandler* GetEventHandler();
	void Call();
	
private :
	ActionListener* _actionListener;
	EventHandler* _eventHandler;
};

#endif	/* CALLBACKMANAGER_H */

