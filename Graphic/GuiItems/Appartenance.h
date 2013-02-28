/* 
 * File:   Appartenance.h
 * Author: manu
 *
 * Created on 28 février 2013, 11:31
 */

#ifndef APPARTENANCE_H
#define	APPARTENANCE_H

#include "../../GraphicEngine/GuiManager/GuiItem/GuiItem.h"

class Appartenance : public GuiItem
{
public:
    Appartenance(sf::RenderWindow &window, int state, int x, int y, int size, sf::Color color);
    void Draw(int state);
    void SetColor(sf::Color);

private:
    sf::Shape _shape;
    sf::Color _color;
};

#endif	/* APPARTENANCE_H */

