/* 
 * File:   Hotel.h
 * Author: manu
 *
 * Created on 27 février 2013, 15:16
 */

#ifndef HOTEL_H
#define	HOTEL_H

#include "../../GraphicEngine/GuiManager/GuiItem/GuiItem.h"

class Hotel : public GuiItem
{
    public:
        Hotel(sf::RenderWindow &window, int state, int x, int y, int size);
        void Draw(int state);
        
        private:
            sf::Shape _rectangle;
};

#endif	/* HOTEL_H */

