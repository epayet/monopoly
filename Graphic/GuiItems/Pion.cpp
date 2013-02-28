#include "Pion.h"

Pion::Pion(sf::RenderWindow& window, int state, int x, int y, int size, sf::Color color) : GuiItem(window, state, x, y, size, size)
{
    _color = color;
    _cercle = sf::Shape::Circle(x, y, size, color, 3, sf::Color(0, 0, 0));
}

void Pion::Draw(int state)
{
    if (CanDraw(state))
        _window.Draw(_cercle);
}

void Pion::SetX(int x)
{
    GuiItem::SetX(x);
    _cercle.SetPosition(_x, _y);
}

void Pion::SetY(int y)
{
    GuiItem::SetY(y);
    _cercle.SetPosition(_x, _y);
}

sf::Color Pion::GetColor()
{
    return _color;
}