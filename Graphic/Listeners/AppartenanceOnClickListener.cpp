#include "AppartenanceOnClickListener.h"
#include "Graphic/GuiItems/Appartenance.h"
#include "GameEngine/Case/Propriété/Domaine.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "util.h"

AppartenanceOnClickListener::AppartenanceOnClickListener(EVENTTYPE eventType, Appartenance* appartenance, GraphicEngine* graphicEngine, Jeu* jeu, Domaine* domaine)
: ActionListener(eventType, appartenance, graphicEngine)
{
    _jeu = jeu;
    _domaine = domaine;
}

void AppartenanceOnClickListener::Act(sf::Event)
{
    Joueur* joueurActuel = _jeu->GetPlateau()->GetJoueurActuel();

    if (joueurActuel == _domaine->GetProprietaire())
    {
        TextBlock* message = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
        if (_domaine->PeutConstruire())
        {
//            joueurActuel->Construire(_domaine);
            message->SetContent("Vous pouvez construire sur ce domaine. \nLe prix est de " + intToString(_domaine->GetPrixMaisons()));
            _jeu->SetSommeAPayer(_domaine->GetPrixMaisons());
            _jeu->SetDomaineEnConstruction(_domaine);
        }
        else
        {
            message->SetContent("Vous pouvez ne pouvez pas construire sur ce somaine");
        }
        
        message->SetCanDraw(true);
    }
}