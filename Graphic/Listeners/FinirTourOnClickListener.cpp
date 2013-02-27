#include "FinirTourOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"

FinirTourOnClickListener::FinirTourOnClickListener(EVENTTYPE eventType, Button* finirTour, GraphicEngine* graphicEngine, Jeu* jeu) 
                        : ActionListener(eventType, finirTour, graphicEngine)
{
    _jeu = jeu;
}

void FinirTourOnClickListener::Act(sf::Event)
{
    
}
