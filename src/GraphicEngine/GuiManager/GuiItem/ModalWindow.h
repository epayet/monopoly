/* 
 * File:   ModalWindow.h
 * Author: manu
 *
 * Created on 24 février 2013, 19:20
 */

#ifndef MODALWINDOW_H
#define	MODALWINDOW_H

#include "GuiItem.h"
#include <string>

class ModalWindow : public GuiItem
{
public:
    ModalWindow(sf::RenderWindow &window, int state, int windowSizeX, int windowSizeY, int sizex, int sizey, std::string content);
    void Draw(int state);

private:
    std::vector<sf::String> _contents;
};

#endif	/* MODALWINDOW_H */

