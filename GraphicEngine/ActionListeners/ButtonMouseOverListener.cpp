#include "ButtonMouseOverListener.h"
#include "../GuiManager/GuiItem/Button.h"

ButtonMouseOverListener::ButtonMouseOverListener(EVENTTYPE eventType, Button* button) : ActionListener(eventType, button)
{
	
}

void ButtonMouseOverListener::Act(sf::Event)
{
	Button* button = (Button*)_guiItem;
    button->GetText().SetColor(sf::Color(255, 0, 0));
}
