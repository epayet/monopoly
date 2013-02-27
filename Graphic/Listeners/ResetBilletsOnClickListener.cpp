#include "ResetBilletsOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Billet/BilletManager.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"

ResetBilletsOnClickListener::ResetBilletsOnClickListener(EVENTTYPE eventType, Button* resetBouton, GraphicEngine* graphicEngine, Jeu* jeu)
: ActionListener(eventType, resetBouton, graphicEngine)
{
    _jeu = jeu;
}

void ResetBilletsOnClickListener::Act(sf::Event)
{
    BilletManager* billetManagerJoueur = _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager();

    if (_jeu->GetBilletACasser() > 0)
    {
        billetManagerJoueur->Enlever(_jeu->GetBilletManagerARemplir());
    }
    else if (_jeu->GetSommeAPayer() > 0)
        billetManagerJoueur->Ajouter(_jeu->GetBilletManagerARemplir());
    
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ValiderBilletsKey)->SetCanDraw(false);
    
    _jeu->GetBilletManagerARemplir()->Vider();
    _jeu->UpdateSommeAPayer();
}
