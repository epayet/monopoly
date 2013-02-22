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
#include "JeuConstantes.h"
#include "GameEngine/Plateau.h"
#include "../GraphicEngine/GuiManager/GuiItem/Image.h"

Jeu::Jeu()
{
	_plateau = new Plateau();

	_graphicEngine = new GraphicEngine(SIZEWINDOWX, SIZEWINDOWY, "Monopoly");
	_graphicEngine->SetState(FIRSTMENU);

	//Bouton jouer
	Button* bJouer = new Button(_graphicEngine->GetWindow(), FIRSTMENU, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 3, 20, _graphicEngine->GetFont(), JeuConstantes::BoutonJouerKey);
	JouerOnClickListener* joueurListener = new JouerOnClickListener(_graphicEngine);
	CallBackManager* jouerCallBack = new CallBackManager(ONCLICK, joueurListener, bJouer);
	bJouer->AddCallBack(jouerCallBack);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BoutonJouerKey, bJouer);

	//Bouton quitter
	Button* bQuitter = new Button(_graphicEngine->GetWindow(), FIRSTMENU, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 2, 20, _graphicEngine->GetFont(), JeuConstantes::BoutonQuitterKey);
	QuitterOnClickListener* quitterListener = new QuitterOnClickListener(_graphicEngine);
	CallBackManager* quitterCallBack = new CallBackManager(ONCLICK, quitterListener, bQuitter);
	bQuitter->AddCallBack(quitterCallBack);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BoutonQuitterKey, bQuitter);

	//Spinner nb joueurs
	Spinner* chooseNbPlayerSpinner = new Spinner(_graphicEngine->GetWindow(), CHOOSEPLAYER, 2 * (SIZEWINDOWX / 3) - 50, 10, 50, _graphicEngine->GetFont(), 2, 8);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::SpinnerChoixNbJoueursKey, chooseNbPlayerSpinner);

	//Nombre de joueurs :
	TextBlock* chooseNbPlayerTextBlock = new TextBlock(_graphicEngine->GetWindow(), CHOOSEPLAYER, chooseNbPlayerSpinner->GetX() - 200, 10, 20, _graphicEngine->GetFont(), JeuConstantes::TextBlockChoixNbJoueursKey);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::TextBlockChoixNbJoueursKey, chooseNbPlayerTextBlock);

	//Bouton Commencer
	Button* bCommencer = new Button(_graphicEngine->GetWindow(), CHOOSEPLAYER, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 2, 20, _graphicEngine->GetFont(), JeuConstantes::BoutonCommencerKey);
	CommencerOnClickListener* commencerListener = new CommencerOnClickListener(_graphicEngine, this);
	CallBackManager* commencerCallBack = new CallBackManager(ONCLICK, commencerListener, bCommencer);
	bCommencer->AddCallBack(commencerCallBack);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BoutonCommencerKey, bCommencer);

	Image* plateauImage = new Image(_graphicEngine->GetWindow(), INGAME, 0, 0, JeuConstantes::PlateauPath);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::PlateauPath, plateauImage);
}

Jeu::~Jeu()
{
	delete _plateau;
	delete _graphicEngine;
}

void Jeu::Run()
{
	_graphicEngine->Run();
}

Plateau* Jeu::GetPlateau()
{
	return _plateau;
}