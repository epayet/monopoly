#include "Jeu.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "GraphicEngine/GuiManager/GuiItem/Button.h"
#include "GraphicEngine/GuiManager/CallBackManager.h"

void jouerClick(GraphicEngineOwner* owner)
{
	Jeu* jeu = (Jeu*)owner;
	
}

Jeu::Jeu() : GraphicEngineOwner(800, 600, "Monopoly")
{
	Button* bJouer = new Button(_graphicEngine->GetWindow(), 10, 10, 20, "Jouer");
	void (*jouerClickFonction)(GraphicEngineOwner*) = jouerClick;
	CallBackManager* callBackManager = new CallBackManager(ONCLICK, jouerClickFonction, this, bJouer);
	bJouer->AddCallBack(callBackManager);
	_graphicEngine->GetGuiManager()->AddGuiItem(bJouer);
}

Jeu::~Jeu()
{
	
}