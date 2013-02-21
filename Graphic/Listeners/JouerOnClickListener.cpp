#include "JouerOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"

JouerOnClickListener::JouerOnClickListener(GraphicEngine* graphicEngine, Jeu* jeu) : ActionListener(graphicEngine)
{
    _jeu = jeu;
}

void JouerOnClickListener::Act()
{
    _graphicEngine->GetWindow().Close();
}