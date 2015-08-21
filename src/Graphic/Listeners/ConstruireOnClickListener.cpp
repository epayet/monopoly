#include "ConstruireOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "../../GraphicEngine/GraphicEngine.h"
#include "../../GraphicEngine/GuiManager/GuiManager.h"
#include "../../Graphic/JeuConstantes.h"
#include "../../GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "../../Graphic/Jeu.h"

ConstruireOnClickListener::ConstruireOnClickListener(EVENTTYPE eventType, Button* construire, GraphicEngine* graphicEngine, Jeu* jeu) 
                                        : ActionListener(eventType, construire, graphicEngine)
{
    _jeu = jeu;
}

void ConstruireOnClickListener::Act(sf::Event)
{
    TextBlock* message = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    message->SetContent("Cliquez sur une propriete de votre couleur");
    _jeu->SetActionAppartenance(CONSTRUIRE);
}