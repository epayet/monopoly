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
#include "GuiItems/Pion.h"
#include "util.h"
#include "GameEngine/Participant/Participant.h"
#include "GameEngine/Participant/Joueur.h"
#include "Listeners/LancerLesDesOnClickListener.h"
#include "GameEngine/Case/Case.h"

Jeu::Jeu()
{
	_plateau = new Plateau();

	_graphicEngine = new GraphicEngine(SIZEWINDOWX, SIZEWINDOWY, "Monopoly");
	_graphicEngine->SetState(FIRSTMENU);

    //FIRSTMENU
	//Bouton jouer
	Button* bJouer = new Button(_graphicEngine->GetWindow(), FIRSTMENU, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 3, 20, _graphicEngine->GetFont(), JeuConstantes::BoutonJouerKey);
	bJouer->AddListener(new JouerOnClickListener(ONCLICK, bJouer, _graphicEngine));
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BoutonJouerKey, bJouer);

	//Bouton quitter
	Button* bQuitter = new Button(_graphicEngine->GetWindow(), FIRSTMENU, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 2, 20, _graphicEngine->GetFont(), JeuConstantes::BoutonQuitterKey);
	bQuitter->AddListener(new QuitterOnClickListener(ONCLICK, bQuitter, _graphicEngine));
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BoutonQuitterKey, bQuitter);

    
    //CHOOSEPLAYER
	//Spinner nb joueurs
	Spinner* chooseNbPlayerSpinner = new Spinner(_graphicEngine->GetWindow(), CHOOSEPLAYER, 2 * (SIZEWINDOWX / 3) - 50, 10, 50, _graphicEngine->GetFont(), 2, 8);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::SpinnerChoixNbJoueursKey, chooseNbPlayerSpinner);

	//Nombre de joueurs :
	TextBlock* chooseNbPlayerTextBlock = new TextBlock(_graphicEngine->GetWindow(), CHOOSEPLAYER, chooseNbPlayerSpinner->GetX() - 200, 10, 20, _graphicEngine->GetFont(), JeuConstantes::TextBlockChoixNbJoueursKey);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::TextBlockChoixNbJoueursKey, chooseNbPlayerTextBlock);

	//Bouton Commencer
	Button* bCommencer = new Button(_graphicEngine->GetWindow(), CHOOSEPLAYER, (SIZEWINDOWX / 2) - 50, SIZEWINDOWY / 2, 20, _graphicEngine->GetFont(), JeuConstantes::BoutonCommencerKey);
	bCommencer->AddListener(new CommencerOnClickListener(ONCLICK, bCommencer, _graphicEngine, this));
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BoutonCommencerKey, bCommencer);

    
    //INGAME
    //Plateau
	Image* plateauImage = new Image(_graphicEngine->GetWindow(), INGAME, 0, 0, JeuConstantes::PlateauPath);
	_graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::PlateauPath, plateauImage);
    
    //Actions possibles pour : 
    TextBlock* actionsPossiblesPourTextBlock = new TextBlock(_graphicEngine->GetWindow(), INGAME, plateauImage->GetSizeX() + 20, 10, 20, _graphicEngine->GetFont(), JeuConstantes::ActionsPossiblesPourKey);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::ActionsPossiblesPourKey, actionsPossiblesPourTextBlock);
    
    //Lancer les des :
    Button* lancerLesDesButtons = new Button(_graphicEngine->GetWindow(), INGAME, plateauImage->GetSizeX() + 20, 
            actionsPossiblesPourTextBlock->GetY() + actionsPossiblesPourTextBlock->GetSizeY() + 20, 20, _graphicEngine->GetFont(), JeuConstantes::LancerLesDesKey);
    lancerLesDesButtons->AddListener(new LancerLesDesOnClickListener(ONCLICK, lancerLesDesButtons, _graphicEngine, this));
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::LancerLesDesKey, lancerLesDesButtons);
    
    //Dé1
    Image* de1 = new Image(_graphicEngine->GetWindow(), INGAME, lancerLesDesButtons->GetX(), lancerLesDesButtons->GetY() + lancerLesDesButtons->GetSizeY() + 20, JeuConstantes::DesPaths[0]);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::De1Key, de1);
    de1->SetCanDraw(false);
    
    //Dé2
    Image* de2 = new Image(_graphicEngine->GetWindow(), INGAME, lancerLesDesButtons->GetX() + 120, lancerLesDesButtons->GetY() + lancerLesDesButtons->GetSizeY() + 20, JeuConstantes::DesPaths[0]);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::De2Key, de2);
    de2->SetCanDraw(false);
    
    int yNbBillets;
    //Billets
    for(int i=0; i<JeuConstantes::NbBillets; i++)
    {
        int xbillet = 5 + plateauImage->GetSizeX() + (i * JeuConstantes::HauteurBillet) + (i * 7);
        int ybillet = SIZEWINDOWY - JeuConstantes::TailleBillet - 10;
        
        Image* billet = new Image(_graphicEngine->GetWindow(), INGAME, xbillet, ybillet, JeuConstantes::BilletsPaths[i]);
        _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BilletsKeys[i], billet);
        
        yNbBillets = ybillet - 40;
        TextBlock* nbBillets = new TextBlock(_graphicEngine->GetWindow(), INGAME, xbillet + (JeuConstantes::HauteurBillet /3), yNbBillets, 35, _graphicEngine->GetFont(), "0");
        _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::NbBilletsKeys[i], nbBillets);
    }
    
    //Somme cagnotte
    TextBlock* sommeCagnotte = new TextBlock(_graphicEngine->GetWindow(), INGAME, JeuConstantes::HauteurCase + 20, plateauImage->GetSizeY() - JeuConstantes::TailleCase * 2.5, 35, _graphicEngine->GetFont(), "Cagnotte : 0");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::SommeCagnotteKey, sommeCagnotte);
    
    //Message affiché par la case
    TextBlock* caseMessage = new TextBlock(_graphicEngine->GetWindow(), INGAME, lancerLesDesButtons->GetX(), 
            actionsPossiblesPourTextBlock->GetY() + actionsPossiblesPourTextBlock->GetSizeY() + 20, 20, _graphicEngine->GetFont(), "");
    caseMessage->SetCanDraw(false);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::CaseMessageKey, caseMessage);
    
    TextBlock* sommeAPayer = new TextBlock(_graphicEngine->GetWindow(), INGAME, plateauImage->GetSizeX(), yNbBillets - 20, 20, _graphicEngine->GetFont(), "Somme A Payer : 0 / 500");
    _graphicEngine->GetGuiManager()->AddGuiItem("test", sommeAPayer);
    
    Button* resetBillets = new Button(_graphicEngine->GetWindow(), INGAME, sommeAPayer->GetSizeX() + plateauImage->GetSizeX() + 20, yNbBillets - 20, 20, _graphicEngine->GetFont(), "Reset");
    _graphicEngine->GetGuiManager()->AddGuiItem("test", resetBillets);
    
    Button* validerBillets = new Button(_graphicEngine->GetWindow(), INGAME, 
            sommeAPayer->GetSizeX() + plateauImage->GetSizeX() + 40 + resetBillets->GetSizeX(), yNbBillets - 20, 20, _graphicEngine->GetFont(), "Valider");
    _graphicEngine->GetGuiManager()->AddGuiItem("test", validerBillets);
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

void Jeu::SetNbJoueurs(int nbJoueurs)
{
    for(int i=0; i<=nbJoueurs-1; i++)
    {
        std::string nomJoueur = "Joueur ";
        nomJoueur.append(intToString(i));
        _plateau->AddJoueur(nomJoueur);
        
        Pion* pion = new Pion(_graphicEngine->GetWindow(), INGAME, 0, 0, 20, sf::Color(rand_a_b(0, 255), rand_a_b(0, 255), rand_a_b(0, 255)));
        _pions.push_back(pion);
        _graphicEngine->GetGuiManager()->AddGuiItem(nomJoueur, pion);
    }
    
    _nbJoueurs = nbJoueurs;
    
    UpdateJoueurActuel();
    
    for(int i=0; i<nbJoueurs; i++)
        SetPositionJoueur(_plateau->GetJoueurs()[i]);
}

void Jeu::UpdatePlateau()
{
    UpdateJoueurActuel();
    
    //Update Cagnotte
}

void Jeu::UpdateJoueurActuel()
{
    TextBlock* actionsPossiblesPourTextBlock = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ActionsPossiblesPourKey);
    actionsPossiblesPourTextBlock->SetContent(_plateau->GetJoueurActuel()->GetNom() + " :");
    
    int j = 0;
    for(int i=JeuConstantes::NbBillets-1; i>=0; i--)
    {
        TextBlock* nbBillets = (TextBlock*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::NbBilletsKeys[j]);
        nbBillets->SetContent(intToString(_plateau->GetJoueurActuel()->GetBilletManager()->GetBillets()[i].first));
        j++;
    }
    SetPositionJoueur(_plateau->GetJoueurActuel());
}

void Jeu::SetPositionJoueur(Joueur* joueur)
{
    Pion* pion = (Pion*)_graphicEngine->GetGuiManager()->GetGuiItem(joueur->GetNom());
    int position = joueur->GetPosition();
    int h = JeuConstantes::HauteurCase;
    int t = JeuConstantes::TailleCase;
    Image* imagePlateau = (Image*)_graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::PlateauPath);
    int xmax = imagePlateau->GetSizeX();
    int ymax = imagePlateau->GetSizeY();
    int i, x, y;
    
    if(position == 0)
    {
        x = y = xmax - h/2;
    }
    else if(position == 10)
    {
        x = h / 2;
        y = ymax - h / 2;
    }
    else if(position ==20)
    {
        x = y = h / 2;
    }
    else if(position == 30)
    {
        x = xmax - h /2;
        y = h / 2;
    }
    else if(position <= 10)
    {
        i = 10 - position;
        x = i * t + t/4 + t;
        y = ymax - h /2;
    }
    else if(position <= 20)
    {
        i = 20 - position;
        x = h / 2;
        y = i * t + t/4 + t;
    }
    else if(position <= 30)
    {
        i = position - 20;
        x = i *t + t/4 + t;
        y = h / 2;
    }
    else
    {
        i = position - 30;
        x = xmax - h /2;
        y = i * t + t/4 + t;
    }
    
    pion->SetX(x);
    pion->SetY(y);
    _graphicEngine->Draw();
}