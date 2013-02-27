#include "Hotel.h"
#include "GraphicEngine/GuiManager/GuiItem/GuiItem.h"

Hotel::Hotel(sf::RenderWindow& window, int state, int x, int y, int size) : GuiItem(window, state, x, y, size, size)
{
    _rectangle = sf::Shape::Rectangle(x, y, x + size, y + size, sf::Color(255, 0, 0));
}

void Hotel::Draw(int state)
{
    if(CanDraw(state))
        _window.Draw(_rectangle);
}