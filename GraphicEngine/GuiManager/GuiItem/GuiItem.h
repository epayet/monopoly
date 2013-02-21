/* 
 * File:   GuiItem.h
 * Author: manu
 *
 * Created on 21 février 2013, 10:16
 */

#ifndef GUIITEM_H
#define	GUIITEM_H

#include <SFML/Graphics.hpp>
#include <vector>

class CallBackManager;

class GuiItem
{
public:
	GuiItem(sf::RenderWindow &window, int x, int y, int size);
	~GuiItem();
	virtual void Draw() = 0;
	void AddCallBack(CallBackManager* callBackManager);
	void HandleEvent(sf::Event);
	
protected:
	int _size;
	int _x;
	int _y;
	std::vector<CallBackManager*> _callBackManagers;
	sf::RenderWindow &_window;
};

#endif	/* GUIITEM_H */

