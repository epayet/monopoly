#include "NonPayerOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"

NonPayerOnClickListener::NonPayerOnClickListener(EVENTTYPE eventType, Button* nonBouton, GraphicEngine* graphicEngine, Jeu* jeu) 
            : ActionListener(eventType, nonBouton, graphicEngine)
{
    _jeu = jeu;
}

void NonPayerOnClickListener::Act(sf::Event)
{
    Joueur* joueurActuel = _jeu->GetPlateau()->GetJoueurActuel();
    _jeu->GetPlateau()->GetCase(joueurActuel->GetPosition())->Agir(joueurActuel);
    _jeu->AfficherVoulezVousPayer(false);
    _jeu->AfficherActionsPossibles(true);
    
    
}