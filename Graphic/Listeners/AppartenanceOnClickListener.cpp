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

AppartenanceOnClickListener::AppartenanceOnClickListener(EVENTTYPE eventType, Appartenance* appartenance, GraphicEngine* graphicEngine, Jeu* jeu, Propriete* propriete)
: ActionListener(eventType, appartenance, graphicEngine)
{
    _jeu = jeu;
    _propriete = propriete;
}

void AppartenanceOnClickListener::Act(sf::Event)
{
    Joueur* joueurActuel = _jeu->GetPlateau()->GetJoueurActuel();
    TextBlock* message = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);

    if (joueurActuel == _propriete->GetProprietaire())
    {
        switch (_jeu->GetActionAppartenance())
        {
            case CONSTRUIRE:
                if (_propriete->PeutConstruire())
                {
                    //            joueurActuel->Construire(_domaine);
                    message->SetContent("Vous pouvez construire sur ce domaine. \nLe prix est de " + intToString(_propriete->GetPrixMaisons()));
                    _jeu->SetSommeAPayer(_propriete->GetPrixMaisons());
                    _jeu->SetProprieteACliquer(_propriete);
                }
                else
                {
                    message->SetContent("Vous pouvez ne pouvez pas construire sur ce somaine");
                }
                break;

            case HYPOTHEQUER:
                if (_propriete->EstHypotheque())
                    message->SetContent("Vous avez deja hypotheque cette propriete");
                else
                {
                    _propriete->Hypothequer();
                    message->SetContent("Vous avez hypotheque cette propriete");
                    _jeu->UpdateJoueurActuel();
                    _jeu->UpdateAppartenance();
                }
                break;
        }



        message->SetCanDraw(true);
    }
}