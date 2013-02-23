#include "ButtonMouseOutListener.h"
#include "../GuiManager/GuiItem/Button.h"

ButtonMouseOutListener::ButtonMouseOutListener(EVENTTYPE eventType, Button* button) : ActionListener(eventType, button)
{
    
}

void ButtonMouseOutListener::Act(sf::Event)
{
	Button* button = (Button*)_guiItem;
    button->GetText().SetColor(sf::Color(0, 0, 0));
}
