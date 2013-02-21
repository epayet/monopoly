#include "ButtonMouseOverListener.h"
#include "../GuiManager/GuiItem/Button.h"

ButtonMouseOverListener::ButtonMouseOverListener(Button* button)
{
    _button = button;
}

void ButtonMouseOverListener::Act()
{
    _button->GetText().SetColor(sf::Color(255, 0, 0));
}
