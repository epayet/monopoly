#include "CommencerOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "Graphic/Jeu.h"

CommencerOnClickListener::CommencerOnClickListener(GraphicEngine* graphicEngine) : ActionListener(graphicEngine)
{
	
}

void CommencerOnClickListener::Act(sf::Event)
{
	_graphicEngine->SetState(INGAME);
}