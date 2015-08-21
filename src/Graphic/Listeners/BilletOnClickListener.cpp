#include "BilletOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Image.h"
#include "../../Graphic/Jeu.h"
#include "../../GameEngine/Plateau.h"
#include "../../GameEngine/Participant/Joueur.h"
#include "../../GraphicEngine/GraphicEngine.h"
#include "../../GraphicEngine/GuiManager/GuiManager.h"
#include "../../Graphic/JeuConstantes.h"
#include "../../GameEngine/Billet/Billet.h"

BilletOnClickListener::BilletOnClickListener(EVENTTYPE eventType, Image* imageBillet, GraphicEngine* graphicEngine, Jeu* jeu, TYPEBILLET billet)
: ActionListener(eventType, imageBillet, graphicEngine)
{
    _jeu = jeu;
    _billet = billet;
}

void BilletOnClickListener::Act(sf::Event)
{
    BilletManager* billetManagerJoueurActuel = _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager();
    bool affichValider = false;
    
    if (_jeu->GetBilletACasser() == -1)
    {
        if (billetManagerJoueurActuel->NombreBillets(_billet) > 0)
        {
        _jeu->GetBilletManagerARemplir()->Vider();
        _jeu->SetBilletACasser(_jeu->GetBilletManagerARemplir()->GetBillet(_billet)->GetValeur());
        _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager()->Enlever(1, _billet);
        }
    }
    else if (_jeu->GetBilletACasser() > 0)
    {
        _jeu->GetBilletManagerARemplir()->Ajouter(1, _billet);
        billetManagerJoueurActuel->Ajouter(1, _billet);
        _jeu->UpdateSommeAPayer();

        if (_jeu->GetBilletManagerARemplir()->VautSomme(_jeu->GetBilletACasser()))
            affichValider = true;
    }
    else if (_jeu->GetSommeAPayer() != 0)
    {
        if (billetManagerJoueurActuel->NombreBillets(_billet) > 0)
        {
            _jeu->GetBilletManagerARemplir()->Ajouter(1, _billet);
            billetManagerJoueurActuel->Enlever(1, _billet);
            _jeu->UpdateSommeAPayer();

            if (_jeu->GetBilletManagerARemplir()->VautSomme(_jeu->GetSommeAPayer()))
                affichValider = true; 
        }
    }
    
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ValiderBilletsKey)->SetCanDraw(affichValider);
}
