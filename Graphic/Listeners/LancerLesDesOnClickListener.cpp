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
#include "GameEngine/Case/Case.h"

LancerLesDesOnClickListener::LancerLesDesOnClickListener(EVENTTYPE eventType, Button* lancerLesDesBouton, GraphicEngine* graphicEngine, Jeu* jeu) : ActionListener(eventType, lancerLesDesBouton, graphicEngine)
{
    _jeu = jeu;
}

void LancerLesDesOnClickListener::Act(sf::Event)
{
    _jeu->LancerLesDes();
}