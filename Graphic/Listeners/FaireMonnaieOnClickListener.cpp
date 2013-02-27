#include "FaireMonnaieOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"

FaireMonnaieOnClickListener::FaireMonnaieOnClickListener(EVENTTYPE eventType, Button* faireMonnaieBouton, GraphicEngine* graphicEngine, Jeu* jeu) 
                            : ActionListener(eventType, faireMonnaieBouton, graphicEngine)
{
    _jeu = jeu;
}

void FaireMonnaieOnClickListener::Act(sf::Event)
{
    
}