#include "ButtonMouseOutListener.h"
#include "../GuiManager/GuiItem/Button.h"

ButtonMouseOutListener::ButtonMouseOutListener(Button* button)
{
    _button = button;
}

void ButtonMouseOutListener::Act()
{
    _button->GetText().SetColor(sf::Color(0, 0, 0));
}
