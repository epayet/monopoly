#include "FaireMonnaieOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "../../GraphicEngine/GraphicEngine.h"
#include "../../GraphicEngine/GuiManager/GuiManager.h"
#include "../../Graphic/JeuConstantes.h"
#include "../../GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "../../Graphic/Jeu.h"

FaireMonnaieOnClickListener::FaireMonnaieOnClickListener(EVENTTYPE eventType, Button* faireMonnaieBouton, GraphicEngine* graphicEngine, Jeu* jeu) 
                            : ActionListener(eventType, faireMonnaieBouton, graphicEngine)
{
    _jeu = jeu;
}

void FaireMonnaieOnClickListener::Act(sf::Event)
{
    TextBlock* message = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    message->SetContent("Cliquez sur le billet à casser");
    message->SetCanDraw(true);
    _jeu->SetBilletACasser(-1);
    
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::FinirTourKey)->SetCanDraw(false);
}