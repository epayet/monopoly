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
	GuiItem(sf::RenderWindow &window, int state, int x, int y, int sizex = 0, int sizey = 0);
	~GuiItem();
	virtual void Draw(int state) = 0;
	void AddCallBack(CallBackManager* callBackManager);
	void HandleEvent(sf::Event, int state);
	int GetX();
	int GetY();
	int GetSizeX();
	int GetSizeY();

protected:
	int _sizex, _sizey;
	int _x;
	int _y;
	std::vector<CallBackManager*> _callBackManagers;
	sf::RenderWindow &_window;
	int _state;
};

#endif	/* GUIITEM_H */

