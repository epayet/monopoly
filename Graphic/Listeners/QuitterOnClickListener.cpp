#include "QuitterOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"

QuitterOnClickListener::QuitterOnClickListener(GraphicEngine* graphicEngine) : ActionListener(graphicEngine)
{

}

void QuitterOnClickListener::Act(sf::Event)
{
	_graphicEngine->GetWindow().Close();
}