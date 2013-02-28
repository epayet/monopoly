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
public:
	TextBlock(sf::RenderWindow &window, int state, int x, int y, int size, sf::Font font, std::string content);
	void Draw(int state);
    void SetContent(std::string content);
    void UpdateSize();

protected:
	sf::Font _font;
	sf::String _content;
};

#endif	/* TEXTBLOCK_H */

