#include "OuiPayerOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"

OuiPayerOnClickListener::OuiPayerOnClickListener(EVENTTYPE eventType, Button* ouiBouton, GraphicEngine* graphicEngine, Jeu* jeu) 
                    : ActionListener(eventType, ouiBouton, graphicEngine)
{
    _jeu = jeu;
}

void OuiPayerOnClickListener::Act(sf::Event)
{
    _jeu->SetSommeAPayer(_jeu->GetPlateau()->GetCase(_jeu->GetPlateau()->GetJoueurActuel()->GetPosition())->SommeAPayer());
    _jeu->AfficherVoulezVousPayer(false);
}