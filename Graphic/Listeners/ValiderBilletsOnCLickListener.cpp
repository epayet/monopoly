#include "ValiderBilletsOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"

ValiderBilletsOnClickListener::ValiderBilletsOnClickListener(EVENTTYPE eventType, Button* validerBouton, GraphicEngine* graphicEngine, Jeu* jeu) :
ActionListener(eventType, validerBouton, graphicEngine)
{
    _jeu = jeu;
}

void ValiderBilletsOnClickListener::Act(sf::Event)
{
    Joueur* joueurActuel = _jeu->GetPlateau()->GetJoueurActuel();

    if (_jeu->GetBilletACasser() > 0)
    {
        _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::FinirTourKey)->SetCanDraw(true);
        _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey)->SetCanDraw(false);
        _jeu->SetBilletACasser(0);
    }
    else if (_jeu->GetSommeAPayer() > 0)
    {
        if(_jeu->GetDomaineEnConstruction() != NULL)
            joueurActuel->Construire(_jeu->GetDomaineEnConstruction());
        else
            _jeu->GetPlateau()->GetCase(joueurActuel->GetPosition())->Agir(joueurActuel, _jeu->GetBilletManagerARemplir());        
        
        _jeu->SetSommeAPayer(0);
    }
    

    _jeu->GetBilletManagerARemplir()->Vider();
    _guiItem->SetCanDraw(false);

    if (_jeu->GetSommeAPayer() == 0)
    {
        _jeu->AfficherSommeAPayer(false);
        _jeu->AfficherActionsPossibles(true);
    }
    else
        _jeu->AfficherActionsPossibles(true,false);
}