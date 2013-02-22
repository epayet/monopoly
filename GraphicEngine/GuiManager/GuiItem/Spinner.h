/* 
 * File:   Spinner.h
 * Author: manu
 *
 * Created on 22 février 2013, 11:11
 */

#ifndef SPINNER_H
#define	SPINNER_H

#include "GuiItem.h"

class Spinner : public GuiItem
{
public:
	Spinner(sf::RenderWindow &window, int state, int x, int y, int size, sf::Font font, int min = 0, int max = 999);
	~Spinner();
	void Draw(int state);
	int GetNb();
	void Up();
	void Down();
	int GetStartXArrows();

private:
	int _nb, _min, _max;
	sf::Shape _rect, _upRect, _downRect, _upArrow, _downArrow;
	sf::String _nbString, _plus, _moins;
	sf::Font _font;
	void Update();
};

#endif	/* SPINNER_H */

