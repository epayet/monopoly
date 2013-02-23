#include "JouerOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "Graphic/Jeu.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"

JouerOnClickListener::JouerOnClickListener(EVENTTYPE eventType, Button* jouerBouton, GraphicEngine* graphicEngine) : ActionListener(eventType, jouerBouton, graphicEngine)
{
}

void JouerOnClickListener::Act(sf::Event)
{
	_graphicEngine->SetState(CHOOSEPLAYER);
}