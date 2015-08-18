#include "QuitterOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"

QuitterOnClickListener::QuitterOnClickListener(EVENTTYPE eventType, Button* quitterBouton, GraphicEngine* graphicEngine) : ActionListener(eventType, quitterBouton, graphicEngine)
{

}

void QuitterOnClickListener::Act(sf::Event)
{
	_graphicEngine->GetWindow().Close();
}