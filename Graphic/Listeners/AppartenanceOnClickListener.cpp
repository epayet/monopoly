#include "AppartenanceOnClickListener.h"
#include "Graphic/GuiItems/Appartenance.h"
#include "GameEngine/Case/Propriété/Domaine.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"

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
        if (_domaine->PeutConstruire())
            joueurActuel->Construire(_domaine);
    }
}