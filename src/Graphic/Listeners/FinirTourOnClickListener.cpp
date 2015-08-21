#include "FinirTourOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "../../Graphic/Jeu.h"
#include "../../GameEngine/Plateau.h"

FinirTourOnClickListener::FinirTourOnClickListener(EVENTTYPE eventType, Button* finirTour, GraphicEngine* graphicEngine, Jeu* jeu) 
                        : ActionListener(eventType, finirTour, graphicEngine)
{
    _jeu = jeu;
}

void FinirTourOnClickListener::Act(sf::Event)
{
    _jeu->UpdateFinirTour();
    _guiItem->SetCanDraw(false);
}
