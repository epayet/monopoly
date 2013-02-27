#include "BilletOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Image.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "GameEngine/Billet/Billet.h"

BilletOnClickListener::BilletOnClickListener(EVENTTYPE eventType, Image* imageBillet, GraphicEngine* graphicEngine, Jeu* jeu, TYPEBILLET billet)
: ActionListener(eventType, imageBillet, graphicEngine)
{
    _jeu = jeu;
    _billet = billet;
}

void BilletOnClickListener::Act(sf::Event)
{
    if (_jeu->GetBilletACasser() == -1)
    {
        _jeu->GetBilletManagerARemplir()->Vider();
        _jeu->SetBilletACasser(_jeu->GetBilletManagerARemplir()->GetBillet(_billet)->GetValeur());
        _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager()->Enlever(1, _billet);
    }
    else if (_jeu->GetBilletACasser() > 0)
    {
        BilletManager* billetManagerJoueurActuel = _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager();

        _jeu->GetBilletManagerARemplir()->Ajouter(1, _billet);
        billetManagerJoueurActuel->Ajouter(1, _billet);
        _jeu->UpdateSommeAPayer();

        if (_jeu->GetBilletManagerARemplir()->VautSomme(_jeu->GetBilletACasser()))
            _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ValiderBilletsKey)->SetCanDraw(true);

    }
    else if (_jeu->GetSommeAPayer() != 0)
    {
        BilletManager* billetManagerJoueurActuel = _jeu->GetPlateau()->GetJoueurActuel()->GetBilletManager();

        if (billetManagerJoueurActuel->NombreBillets(_billet) > 0)
        {
            _jeu->GetBilletManagerARemplir()->Ajouter(1, _billet);
            billetManagerJoueurActuel->Enlever(1, _billet);
            _jeu->UpdateSommeAPayer();

            if (_jeu->GetBilletManagerARemplir()->VautSomme(_jeu->GetSommeAPayer()))
                _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ValiderBilletsKey)->SetCanDraw(true);
        }
    }
}
