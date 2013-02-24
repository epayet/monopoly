#include "LancerLesDesOnClickListener.h"
#include "GameEngine/De.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "GraphicEngine/GuiManager/GuiItem/Image.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "GraphicEngine/GuiManager/GuiItem/TextBlock.h"

LancerLesDesOnClickListener::LancerLesDesOnClickListener(EVENTTYPE eventType, Button* lancerLesDesBouton, GraphicEngine* graphicEngine, Jeu* jeu) : ActionListener(eventType, lancerLesDesBouton, graphicEngine)
{
    _jeu = jeu;
}

void LancerLesDesOnClickListener::Act(sf::Event)
{
    int de1 = De::Lancer();
    int de2 = De::Lancer();
    SetImageDe(JeuConstantes::De1Key, de1);
    SetImageDe(JeuConstantes::De2Key, de2);

    sf::Clock clock;
    clock.Reset();
    int cpt = 0;
    while (cpt < de1 + de2)
    {
        if (clock.GetElapsedTime() > 0.5)
        {
            _jeu->GetPlateau()->GetJoueurActuel()->Avancer(1);
            _jeu->UpdateJoueurActuel();
            cpt++;
            clock.Reset();
        }
    }
    
    //Enlève comme action possible lancer les dés
//    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::LancerLesDesKey)->SetCanDraw(false);
//    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::De1Key)->SetCanDraw(false);
//    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::De2Key)->SetCanDraw(false);
    
    //Actions possibles
    TextBlock* caseMessage = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    caseMessage->SetCanDraw(true);
    caseMessage->SetContent("");
    
    _jeu->GetPlateau()->FinirTour();
}

void LancerLesDesOnClickListener::SetImageDe(std::string deKey, int de)
{
    Image* deImage = (Image*) _graphicEngine->GetGuiManager()->GetGuiItem(deKey);
    deImage->SetFilePath(JeuConstantes::DesPaths[de - 1]);
    deImage->SetCanDraw(true);
}