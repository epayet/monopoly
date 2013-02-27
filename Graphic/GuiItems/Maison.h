/* 
 * File:   Maison.h
 * Author: manu
 *
 * Created on 27 février 2013, 15:13
 */

#ifndef MAISON_H
#define	MAISON_H

#include "../../GraphicEngine/GuiManager/GuiItem/GuiItem.h"

class Maison : public GuiItem
{
public:
    Maison(sf::RenderWindow &window, int state, int x, int y, int size);
    void Draw(int state);
    
    private:
        sf::Shape _rectangle;
};

#endif	/* MAISON_H */

