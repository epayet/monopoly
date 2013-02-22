#include "SpinnerOnClickListener.h"
#include "GraphicEngine/GuiManager/GuiItem/GuiItem.h"
#include "GraphicEngine/GuiManager/GuiItem/Spinner.h"

SpinnerOnClickListener::SpinnerOnClickListener(Spinner* spinner) : ActionListener()
{
	_spinner = spinner;
}

void SpinnerOnClickListener::Act(sf::Event event)
{
	if(event.MouseButton.X > _spinner->GetStartXArrows())
	{
		if(event.MouseButton.Y < _spinner->GetY() + _spinner->GetSizeY() / 2)
			_spinner->Up();
		else
			_spinner->Down();
	}
}