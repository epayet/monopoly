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
class ActionListener;

class GuiItem
{
public:
	GuiItem(sf::RenderWindow &window, int state, int x, int y, int sizex = 0, int sizey = 0);
	~GuiItem();
	virtual void Draw(int state) = 0;
//	void AddCallBack(CallBackManager* callBackManager);
    void AddListener(ActionListener* );
	void HandleEvent(sf::Event, int state);
	int GetX();
	int GetY();
    virtual void SetX(int x);
    virtual void SetY(int y);
	int GetSizeX();
	int GetSizeY();
    bool CanDraw(int state);
    void SetCanDraw(bool);

protected:
	int _sizex, _sizey;
	int _x;
	int _y;
//	std::vector<CallBackManager*> _callBackManagers;
    std::vector<ActionListener*> _listeners;
	sf::RenderWindow &_window;
	int _state;
    bool _canDraw;
};

#endif	/* GUIITEM_H */

