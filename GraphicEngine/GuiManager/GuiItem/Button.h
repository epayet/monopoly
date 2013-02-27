/* 
 * File:   Button.h
 * Author: manu
 *
 * Created on 21 février 2013, 10:17
 */

#ifndef BUTTON_H
#define	BUTTON_H

#define MARGIN 5

#include "GuiItem.h"

class Button : public GuiItem
{
public:
	Button(sf::RenderWindow &window, int state, int x, int y, int size, sf::Font font, std::string content);
	~Button();
	void Draw(int state);
	sf::String &GetText();
    void SetX(int x);
    void SetY(int y);
    void UpdateRect();

private:
	sf::Font _font;
	sf::String _text;
	sf::Shape _rect;
};

#endif	/* BUTTON_H */

