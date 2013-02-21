/* 
 * File:   Button.h
 * Author: manu
 *
 * Created on 21 février 2013, 10:17
 */

#ifndef BUTTON_H
#define	BUTTON_H

#include "GuiItem.h"

class Button : public GuiItem
{
	public:
		Button(sf::RenderWindow &window, int x, int y, int size, std::string content);
		~Button();
		void Draw();
	private:
		std::string _content;
};

#endif	/* BUTTON_H */

