#include "HypothequerOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "../../Graphic/Jeu.h"
#include "../../GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "../JeuConstantes.h"
#include "../../GraphicEngine/GraphicEngine.h"
#include "../../GraphicEngine/GuiManager/GuiManager.h"

HypothequerOnClickListener::HypothequerOnClickListener(EVENTTYPE eventType, Button* hypothequer, GraphicEngine* graphicEngine, Jeu* jeu) 
                        : ActionListener(eventType, hypothequer, graphicEngine)
{
    _jeu = jeu;
}

void HypothequerOnClickListener::Act(sf::Event)
{
    TextBlock* message = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    message->SetContent("Cliquez sur une propriete de votre couleur");
    _jeu->SetActionAppartenance(HYPOTHEQUER);
}