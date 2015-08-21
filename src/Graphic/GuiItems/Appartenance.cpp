#include "Appartenance.h"
#include "../../util.h"

Appartenance::Appartenance(sf::RenderWindow& window, int state, int x, int y, int size, sf::Color color) : GuiItem(window, state, x, y, size, size)
{
    _color = color;
//    _shape = sf::Shape::Rectangle(x, y, x + size, y + size, _color);
    _str.SetText("0");
    _str.SetPosition(x, y);
    _str.SetSize(size);
    _str.SetColor(_color);
}

void Appartenance::Draw(int state)
{
    if(CanDraw(state))
    {
//        _window.Draw(_shape);
        _window.Draw(_str);
    }
}

void Appartenance::SetColor(sf::Color color)
{
    _color = color;
//    _shape.SetColor(_color);
    _str.SetColor(_color);
}

void Appartenance::SetNbMaisons(int nb)
{
    _str.SetText(intToString(nb));
}

void Appartenance::SetNbMaisons(std::string str)
{
    _str.SetText(str);
}