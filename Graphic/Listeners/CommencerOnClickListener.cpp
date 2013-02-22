#include "CommencerOnClickListener.h"
#include "GraphicEngine/GraphicEngine.h"
#include "Graphic/Jeu.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "GraphicEngine/GuiManager/GuiItem/Spinner.h"
#include "../../GameEngine/Plateau.h"

CommencerOnClickListener::CommencerOnClickListener(GraphicEngine* graphicEngine, Jeu* jeu) : ActionListener(graphicEngine)
{
	_jeu = jeu;
}

void CommencerOnClickListener::Act(sf::Event)
{
	Spinner* nbJoueursSpinner = (Spinner*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::SpinnerChoixNbJoueursKey);
	_jeu->GetPlateau()->SetNbJoueurs(nbJoueursSpinner->GetNb());
	_graphicEngine->SetState(INGAME);
}