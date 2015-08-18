#include "FinirTourKeyReleasedListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "GraphicEngine/GuiManager/GuiItem/GuiItem.h"
#include "../Jeu.h"

FinirTourKeyReleasedListener::FinirTourKeyReleasedListener(EVENTTYPE eventType, sf::Key::Code key, GraphicEngine* graphicEngine, Jeu* jeu)
: ActionListener(eventType, key, graphicEngine)
{
    _jeu = jeu;
}

void FinirTourKeyReleasedListener::Act(sf::Event)
{
    GuiItem* finirTourBouton = _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::FinirTourKey);
    if (finirTourBouton->CanDraw(_graphicEngine->GetState()))
    {
        _jeu->UpdateFinirTour();
        finirTourBouton->SetCanDraw(false);
    }
}
