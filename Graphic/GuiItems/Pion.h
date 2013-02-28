/* 
 * File:   Pion.h
 * Author: manu
 *
 * Created on 23 février 2013, 10:23
 */

#ifndef PION_H
#define	PION_H

#include "../../GraphicEngine/GuiManager/GuiItem/GuiItem.h"

class Pion : public GuiItem
{
public:
    Pion(sf::RenderWindow &window, int state, int x, int y, int size, sf::Color color);
    void Draw(int state);
    void SetX(int x);
    void SetY(int y);
    sf::Color GetColor();

private:
    sf::Shape _cercle;
    sf::Color _color;
};

#endif	/* PION_H */

