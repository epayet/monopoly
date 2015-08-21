#include "LeverHypothequeOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "../../Graphic/Jeu.h"
#include "../../GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "../../GraphicEngine/GraphicEngine.h"
#include "../../GraphicEngine/GuiManager/GuiManager.h"
#include "../JeuConstantes.h"

LeverHypothequeOnClickListener::LeverHypothequeOnClickListener(EVENTTYPE eventType, Button* lever, GraphicEngine* graphicEngine, Jeu* jeu) 
                            : ActionListener(eventType, lever, graphicEngine)
{
    _jeu = jeu;
}

void LeverHypothequeOnClickListener::Act(sf::Event)
{
    TextBlock* message = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    message->SetContent("Cliquez sur une propriete de votre couleur hypothequee");
    _jeu->SetActionAppartenance(LEVERHYPOTHEQUE);
}
