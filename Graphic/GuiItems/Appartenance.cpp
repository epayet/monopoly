#include "Appartenance.h"
#include "GraphicEngine/GuiManager/GuiItem/GuiItem.h"

Appartenance::Appartenance(sf::RenderWindow& window, int state, int x, int y, int size, sf::Color color) : GuiItem(window, state, x, y, size, size)
{
    _color = color;
    _shape = sf::Shape::Rectangle(x, y, x + size, y + size, _color);
}

void Appartenance::Draw(int state)
{
    if(CanDraw(state))
        _window.Draw(_shape);
}

void Appartenance::SetColor(sf::Color color)
{
    _color = color;
    _shape.SetColor(_color);
}