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

LancerLesDesOnClickListener::LancerLesDesOnClickListener(EVENTTYPE eventType, Button* lancerLesDesBouton, GraphicEngine* graphicEngine, Jeu* jeu) : ActionListener(eventType, lancerLesDesBouton,graphicEngine)
{
    _jeu = jeu;
}

void LancerLesDesOnClickListener::Act(sf::Event)
{
    int de1 = De::Lancer();
    int de2 = De::Lancer();
    SetImageDe(JeuConstantes::De1Key, de1);
    SetImageDe(JeuConstantes::De2Key, de2);
    _jeu->GetPlateau()->GetJoueurActuel()->Avancer(de1 + de2);
    _jeu->UpdateJoueurActuel();
    _jeu->GetPlateau()->FinirTour();
}

void LancerLesDesOnClickListener::SetImageDe(std::string deKey, int de)
{
    Image* deImage = (Image*)_graphicEngine->GetGuiManager()->GetGuiItem(deKey);
    deImage->SetFilePath(JeuConstantes::DesPaths[de -1]);
    deImage->SetCanDraw(true);
}