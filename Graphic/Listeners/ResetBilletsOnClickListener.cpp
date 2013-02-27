#include "ResetBilletsOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Billet/BilletManager.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"

ResetBilletsOnClickListener::ResetBilletsOnClickListener(EVENTTYPE eventType, Button* resetBouton, GraphicEngine* graphicEngine, Jeu* jeu) 
                                : ActionListener(eventType, resetBouton, graphicEngine)
{
    _jeu = jeu;
}

void ResetBilletsOnClickListener::Act(sf::Event)
{
    _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager()->Ajouter(_jeu->GetBilletManagerARemplir());
    _jeu->GetBilletManagerARemplir()->Vider();
    _jeu->UpdateSommeAPayer();
}
