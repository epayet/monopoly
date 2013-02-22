/* 
 * File:   Image.h
 * Author: manu
 *
 * Created on 22 février 2013, 16:24
 */

#ifndef IMAGE_H
#define	IMAGE_H

#include "GuiItem.h"

class Image : public GuiItem
{
public:
	Image(sf::RenderWindow &window, int state, int x, int y, std::string filePath);
	void Draw(int state);

private:
	sf::Sprite _sprite;
	sf::Image _image;
};

#endif	/* IMAGE_H */

