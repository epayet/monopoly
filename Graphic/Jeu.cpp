#include "Jeu.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "GraphicEngine/GuiManager/GuiItem/Button.h"
#include "GraphicEngine/GuiManager/CallBackManager.h"
#include "Listeners/JouerOnClickListener.h"
#include "Listeners/QuitterOnClickListener.h"
#include "../GraphicEngine/GuiManager/GuiItem/Spinner.h"
#include "../GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "Listeners/CommencerOnClickListener.h"

Jeu::Jeu()
{
    _graphicEngine = new GraphicEngine(SIZEWINDOWX, SIZEWINDOWY, "Monopoly");
	_graphicEngine->SetState(FIRSTMENU);
    
	//Bouton jouer
	Button* bJouer = new Button(_graphicEngine->GetWindow(), FIRSTMENU, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 3, 20, _graphicEngine->GetFont(), "Jouer");
    JouerOnClickListener* joueurListener = new JouerOnClickListener(_graphicEngine);
	CallBackManager* jouerCallBack = new CallBackManager(ONCLICK, joueurListener, bJouer);
	bJouer->AddCallBack(jouerCallBack);
	_graphicEngine->GetGuiManager()->AddGuiItem(bJouer);
	
	//Bouton quitter
	Button* bQuitter = new Button(_graphicEngine->GetWindow(), FIRSTMENU, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 2, 20, _graphicEngine->GetFont(), "Quitter");
    QuitterOnClickListener* quitterListener = new QuitterOnClickListener(_graphicEngine);
	CallBackManager* quitterCallBack = new CallBackManager(ONCLICK, quitterListener, bQuitter);
	bQuitter->AddCallBack(quitterCallBack);
	_graphicEngine->GetGuiManager()->AddGuiItem(bQuitter);
	
	//Spinner nb joueurs
	Spinner* chooseNbPlayerSpinner = new Spinner(_graphicEngine->GetWindow(), CHOOSEPLAYER, 2*(SIZEWINDOWX / 3) - 50, 10, 50, _graphicEngine->GetFont(), 2, 8);
	_graphicEngine->GetGuiManager()->AddGuiItem(chooseNbPlayerSpinner);
	
	//Nombre de joueurs :
	TextBlock* chooseNbPlayerTextBlock = new TextBlock(_graphicEngine->GetWindow(), CHOOSEPLAYER, chooseNbPlayerSpinner->GetX() - 200, 10, 20, _graphicEngine->GetFont(), "Nombre de joueurs :");
	_graphicEngine->GetGuiManager()->AddGuiItem(chooseNbPlayerTextBlock);
	
	//Bouton Commencer
	Button* bCommencer = new Button(_graphicEngine->GetWindow(), CHOOSEPLAYER, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 2, 20, _graphicEngine->GetFont(), "Commencer");
    CommencerOnClickListener* commencerListener = new CommencerOnClickListener(_graphicEngine);
	CallBackManager* commencerCallBack = new CallBackManager(ONCLICK, commencerListener, bCommencer);
	bCommencer->AddCallBack(commencerCallBack);
	_graphicEngine->GetGuiManager()->AddGuiItem(bCommencer);
}

Jeu::~Jeu()
{
	delete _graphicEngine;
}

void Jeu::Run()
{
    _graphicEngine->Run();
}