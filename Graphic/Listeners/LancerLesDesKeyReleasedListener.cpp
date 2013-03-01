#include "LancerLesDesKeyReleasedListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "GraphicEngine/GuiManager/GuiItem/GuiItem.h"
#include "../Jeu.h"

LancerLesDesKeyReleasedListener::LancerLesDesKeyReleasedListener(EVENTTYPE eventType, sf::Key::Code code, GraphicEngine* graphicEngine, Jeu* jeu) 
                                : ActionListener(eventType, code, graphicEngine)
{
    _jeu = jeu;
}

void LancerLesDesKeyReleasedListener::Act(sf::Event)
{
    if(_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::LancerLesDesKey)->CanDraw(_graphicEngine->GetState()))
        _jeu->LancerLesDes();
}
