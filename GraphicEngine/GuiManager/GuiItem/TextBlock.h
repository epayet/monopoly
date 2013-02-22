/* 
 * File:   TextBlock.h
 * Author: manu
 *
 * Created on 22 février 2013, 11:44
 */

#ifndef TEXTBLOCK_H
#define	TEXTBLOCK_H

#include "GuiItem.h"


class TextBlock : public GuiItem
{
	public :
		TextBlock(sf::RenderWindow &window, int state, int x, int y, int size, sf::Font font, std::string content);
		virtual void Draw(int state);
		
		protected:
			sf::Font _font;
			sf::String _text;
};

#endif	/* TEXTBLOCK_H */

