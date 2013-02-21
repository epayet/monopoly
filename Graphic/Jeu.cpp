#include "Jeu.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "GraphicEngine/GuiManager/GuiItem/Button.h"
#include "GraphicEngine/GuiManager/CallBackManager.h"
#include "Listeners/JouerOnClickListener.h"

Jeu::Jeu()
{
    _graphicEngine = new GraphicEngine(SIZEWINDOWX, SIZEWINDOWY, "Monopoly");
    
	Button* bJouer = new Button(_graphicEngine->GetWindow(),(SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 3, 20, _graphicEngine->GetFont(), "Jouer");
    JouerOnClickListener* joueurListener = new JouerOnClickListener(_graphicEngine, this);
	CallBackManager* callBackManager = new CallBackManager(ONCLICK, joueurListener, bJouer);
	bJouer->AddCallBack(callBackManager);
	_graphicEngine->GetGuiManager()->AddGuiItem(bJouer);
}

Jeu::~Jeu()
{
	delete _graphicEngine;
}

void Jeu::Run()
{
    _graphicEngine->Run();
}