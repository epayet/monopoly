#include "ValiderBilletsOnClickListener.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"

ValiderBilletsOnClickListener::ValiderBilletsOnClickListener(EVENTTYPE eventType, Button* validerBouton, GraphicEngine* graphicEngine, Jeu* jeu) :
                        ActionListener(eventType, validerBouton, graphicEngine)
{
    _jeu = jeu;
}

void ValiderBilletsOnClickListener::Act(sf::Event)
{
    Joueur* joueurActuel = _jeu->GetPlateau()->GetJoueurActuel();
    _jeu->GetPlateau()->GetCase(joueurActuel->GetPosition())->Agir(joueurActuel, _jeu->GetBilletManagerARemplir());
    _jeu->GetBilletManagerARemplir()->Vider();
    _guiItem->SetCanDraw(false);
    _jeu->AfficherSommeAPayer(false);
}