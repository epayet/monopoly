#include "AfficherCacherProprietesOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"

AfficherCacherProprietesOnClickListener::AfficherCacherProprietesOnClickListener(EVENTTYPE eventType, Button* afficherCacher, GraphicEngine* graphicEngine, Jeu* jeu) 
                                        : ActionListener(eventType, afficherCacher, graphicEngine)
{
    _jeu = jeu;
}

void AfficherCacherProprietesOnClickListener::Act(sf::Event)
{
    
}