#include "SpinnerOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/GuiItem.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Spinner.h"

SpinnerOnClickListener::SpinnerOnClickListener(EVENTTYPE eventType, Spinner* spinner) : ActionListener(eventType, spinner)
{
	
}

void SpinnerOnClickListener::Act(sf::Event event)
{
    Spinner* spinner = (Spinner*)_guiItem;
    
	if(event.MouseButton.X > spinner->GetStartXArrows())
	{
		if(event.MouseButton.Y < spinner->GetY() + spinner->GetSizeY() / 2)
			spinner->Up();
		else
			spinner->Down();
	}
}