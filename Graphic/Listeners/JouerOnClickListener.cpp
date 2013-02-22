#include "JouerOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "Graphic/Jeu.h"

JouerOnClickListener::JouerOnClickListener(GraphicEngine* graphicEngine) : ActionListener(graphicEngine)
{
}

void JouerOnClickListener::Act(sf::Event)
{
    _graphicEngine->SetState(CHOOSEPLAYER);
}