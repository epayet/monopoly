#include "Jeu.h"
#include "../GraphicEngine/GraphicEngine.h"
#include "../GraphicEngine/GuiManager/GuiManager.h"
#include "../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "Listeners/JouerOnClickListener.h"
#include "Listeners/QuitterOnClickListener.h"
#include "../GraphicEngine/GuiManager/GuiItem/Spinner.h"
#include "../GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "Listeners/CommencerOnClickListener.h"
#include "JeuConstantes.h"
#include "../GameEngine/Plateau.h"
#include "../GraphicEngine/GuiManager/GuiItem/Image.h"
#include "GuiItems/Pion.h"
#include "../util.h"
#include "../GameEngine/Participant/Participant.h"
#include "../GameEngine/Participant/Joueur.h"
#include "Listeners/LancerLesDesOnClickListener.h"
#include "../GameEngine/Case/Case.h"
#include "Listeners/ResetBilletsOnClickListener.h"
#include "Listeners/ValiderBilletsOnClickListener.h"
#include "Listeners/OuiPayerOnClickListener.h"
#include "Listeners/NonPayerOnClickListener.h"
#include "Listeners/BilletOnClickListener.h"
#include "Listeners/FaireMonnaieOnClickListener.h"
#include "Listeners/ConstruireOnClickListener.h"
#include "Listeners/FinirTourOnClickListener.h"
#include "GuiItems/Appartenance.h"
#include "../GameEngine/Participant/Cagnotte.h"
#include "../GameEngine/Case/Propriété/Propriete.h"
#include "Listeners/FinirTourKeyReleasedListener.h"
#include "Listeners/AppartenanceOnClickListener.h"
#include "../GameEngine/Case/Propriété/Domaine.h"
#include "Listeners/HypothequerOnClickListener.h"
#include "Listeners/LancerLesDesKeyReleasedListener.h"
#include "../GameEngine/De.h"
#include "Listeners/LeverHypothequeOnClickListener.h"

Jeu::Jeu()
{
    _plateau = new Plateau();
    _billetManagerARemplir = new BilletManager();
    _billetACasser = _sommeAPayer = 0;
    _proprieteACliquer = NULL;
    _actionAppartenance = RIENAPPARTENANCE;

    _graphicEngine = new GraphicEngine(SIZEWINDOWX, SIZEWINDOWY, "Monopoly");
    _graphicEngine->SetState(FIRSTMENU);

    _graphicEngine->AddListener(new FinirTourKeyReleasedListener(KEYRELEASED, sf::Key::Return, _graphicEngine, this));
    _graphicEngine->AddListener(new LancerLesDesKeyReleasedListener(KEYRELEASED, sf::Key::L, _graphicEngine, this));

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
    for (int i = 0; i < JeuConstantes::NbBillets; i++)
    {
        int xbillet = 5 + plateauImage->GetSizeX() + (i * JeuConstantes::HauteurBillet) + (i * 7);
        int ybillet = SIZEWINDOWY - JeuConstantes::TailleBillet - 10;

        Image* billet = new Image(_graphicEngine->GetWindow(), INGAME, xbillet, ybillet, JeuConstantes::BilletsPaths[i]);
        _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::BilletsKeys[i], billet);
        billet->AddListener(new BilletOnClickListener(ONCLICK, billet, _graphicEngine, this, JeuConstantes::ValeurBillets[i]));

        yNbBillets = ybillet - 40;
        TextBlock* nbBillets = new TextBlock(_graphicEngine->GetWindow(), INGAME, xbillet + (JeuConstantes::HauteurBillet / 3), yNbBillets, 35, _graphicEngine->GetFont(), "0");
        _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::NbBilletsKeys[i], nbBillets);
    }

    //Somme cagnotte
    TextBlock* sommeCagnotte = new TextBlock(_graphicEngine->GetWindow(), INGAME, JeuConstantes::HauteurCase + 20, plateauImage->GetSizeY() - JeuConstantes::TailleCase * 2.5, 35, _graphicEngine->GetFont(), "Cagnotte : 0");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::SommeCagnotteKey, sommeCagnotte);

    //Message affiché par la case
    TextBlock* caseMessage = new TextBlock(_graphicEngine->GetWindow(), INGAME, lancerLesDesButtons->GetX(),
            de1->GetY() + de1->GetSizeY() + 20, 20, _graphicEngine->GetFont(), "");
    caseMessage->SetCanDraw(false);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::CaseMessageKey, caseMessage);

    //Somme à payer
    TextBlock* sommeAPayer = new TextBlock(_graphicEngine->GetWindow(), INGAME, plateauImage->GetSizeX(), yNbBillets - 25, 20, _graphicEngine->GetFont(), "");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::SommeAPayerKey, sommeAPayer);
    sommeAPayer->SetCanDraw(false);

    //Reset billets
    Button* resetBillets = new Button(_graphicEngine->GetWindow(), INGAME, sommeAPayer->GetSizeX() + plateauImage->GetSizeX() + 20, yNbBillets - 25, 20, _graphicEngine->GetFont(), "Reset");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::ResetBilletsKey, resetBillets);
    resetBillets->SetCanDraw(false);
    resetBillets->AddListener(new ResetBilletsOnClickListener(ONCLICK, resetBillets, _graphicEngine, this));

    //Valider billets
    Button* validerBillets = new Button(_graphicEngine->GetWindow(), INGAME,
            sommeAPayer->GetSizeX() + plateauImage->GetSizeX() + 40 + resetBillets->GetSizeX(), yNbBillets - 25, 20, _graphicEngine->GetFont(), "Valider");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::ValiderBilletsKey, validerBillets);
    validerBillets->SetCanDraw(false);
    validerBillets->AddListener(new ValiderBilletsOnClickListener(ONCLICK, validerBillets, _graphicEngine, this));

    //Voulez vous payer ?
    int yVoulezVousPayer = caseMessage->GetSizeY() + caseMessage->GetY() + 40;

    TextBlock* voulezVousPayer = new TextBlock(_graphicEngine->GetWindow(), INGAME, plateauImage->GetSizeX(), yVoulezVousPayer
            , 20, _graphicEngine->GetFont(), JeuConstantes::VoulezVousPayerKey);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::VoulezVousPayerKey, voulezVousPayer);
    voulezVousPayer->SetCanDraw(false);

    //Réponse oui
    Button* ouiPayer = new Button(_graphicEngine->GetWindow(), INGAME, voulezVousPayer->GetSizeX() + voulezVousPayer->GetX() + 20, yVoulezVousPayer, 20, _graphicEngine->GetFont(), "Oui");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::OuiPayerKey, ouiPayer);
    ouiPayer->SetCanDraw(false);
    ouiPayer->AddListener(new OuiPayerOnClickListener(ONCLICK, ouiPayer, _graphicEngine, this));

    //Réponse non
    Button* nonPayer = new Button(_graphicEngine->GetWindow(), INGAME, ouiPayer->GetSizeX() + ouiPayer->GetX() + 10, yVoulezVousPayer, 20, _graphicEngine->GetFont(), "Non");
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::NonPayerKey, nonPayer);
    nonPayer->SetCanDraw(false);
    nonPayer->AddListener(new NonPayerOnClickListener(ONCLICK, nonPayer, _graphicEngine, this));

    //Faire monnaie
    Button* faireMonnaie = new Button(_graphicEngine->GetWindow(), INGAME, SIZEWINDOWX - 160, 20, 20, _graphicEngine->GetFont(), JeuConstantes::FaireMonnaieKey);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::FaireMonnaieKey, faireMonnaie);
    faireMonnaie->AddListener(new FaireMonnaieOnClickListener(ONCLICK, faireMonnaie, _graphicEngine, this));
    faireMonnaie->SetCanDraw(false);

    //Construire
    Button* constuireBouton = new Button(_graphicEngine->GetWindow(), INGAME, SIZEWINDOWX - 165, 20 + faireMonnaie->GetY() + faireMonnaie->GetSizeY()
            , 20, _graphicEngine->GetFont(), JeuConstantes::ConstruireKey);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::ConstruireKey, constuireBouton);
    constuireBouton->AddListener(new ConstruireOnClickListener(ONCLICK, constuireBouton, _graphicEngine, this));
    constuireBouton->SetCanDraw(false);

    //Hypothequer
    Button* hypothequer = new Button(_graphicEngine->GetWindow(), INGAME, constuireBouton->GetX()
            , constuireBouton->GetSizeY() + constuireBouton->GetY() + 20, 20, _graphicEngine->GetFont(), JeuConstantes::HypothequerKey);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::HypothequerKey, hypothequer);
    hypothequer->AddListener(new HypothequerOnClickListener(ONCLICK, hypothequer, _graphicEngine, this));
    hypothequer->SetCanDraw(false);

    //Lever Hypotheque
    Button* leverhypotheque = new Button(_graphicEngine->GetWindow(), INGAME, hypothequer->GetX()
            , hypothequer->GetSizeY() + hypothequer->GetY() + 20, 20, _graphicEngine->GetFont(), JeuConstantes::LeverHypothequeKey);
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::LeverHypothequeKey, leverhypotheque);
    leverhypotheque->AddListener(new LeverHypothequeOnClickListener(ONCLICK, leverhypotheque, _graphicEngine, this));
    leverhypotheque->SetCanDraw(false);

    //Finir tour
    Button* finirTour = new Button(_graphicEngine->GetWindow(), INGAME, SIZEWINDOWX - 135, leverhypotheque->GetSizeY() + leverhypotheque->GetY() + 20,
            20, _graphicEngine->GetFont(), JeuConstantes::FinirTourKey);
    finirTour->AddListener(new FinirTourOnClickListener(ONCLICK, finirTour, _graphicEngine, this));
    _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::FinirTourKey, finirTour);
    finirTour->SetCanDraw(false);

    //Appartenance
    for (int i = 0; i < 40; i++)
    {
        Case* casePlateau = _plateau->GetCase(i);

        if (casePlateau->Achetable())
        {
            position pos = GetCentreCase(i);
            Appartenance* app = new Appartenance(_graphicEngine->GetWindow(), INGAME, pos.x, pos.y, 40, sf::Color(255, 255, 255));
            app->SetCanDraw(false);
            Domaine* domaine = (Domaine*) casePlateau;
            app->AddListener(new AppartenanceOnClickListener(ONCLICK, app, _graphicEngine, this, domaine));
            _graphicEngine->GetGuiManager()->AddGuiItem(JeuConstantes::AppartenanceKey + intToString(i), app);
        }
    }

}

Jeu::~Jeu()
{
    delete _plateau;
    delete _graphicEngine;
    delete _billetManagerARemplir;
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
    for (int i = 0; i <= nbJoueurs - 1; i++)
    {
        std::string nomJoueur = "Joueur ";
        nomJoueur.append(intToString(i));
        _plateau->AjouterJoueur(nomJoueur);

        Pion* pion = new Pion(_graphicEngine->GetWindow(), INGAME, 0, 0, 20, sf::Color(rand_a_b(0, 255), rand_a_b(0, 255), rand_a_b(0, 255)));
        _pions.push_back(pion);
        _graphicEngine->GetGuiManager()->AddGuiItem(nomJoueur, pion);
    }

    _nbJoueurs = nbJoueurs;

    UpdateJoueurActuel();

    for (int i = 0; i < nbJoueurs; i++)
        SetPositionJoueur(_plateau->GetJoueurs()[i]);
}

void Jeu::UpdatePlateau()
{
    UpdateJoueurActuel();

    //Update Cagnotte
    int sommeCagnotte = _plateau->GetCagnotte()->GetBilletManager()->SommeBillets();
    TextBlock* cagnotte = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::SommeCagnotteKey);
    cagnotte->SetContent(JeuConstantes::SommeCagnotteKey + intToString(sommeCagnotte));

    //Update Appartenance
    UpdateAppartenance();

    //Update Construire
    bool peutConstruire = false;
    if (_plateau->GetJoueurActuel()->PeutConstruire())
        peutConstruire = true;
    
    //Update Hypothequer
    bool peutHypothequer = false;
    if (_plateau->GetJoueurActuel()->PeutHypothequer())
        peutHypothequer = true;
    
    //Update peut lever Hypotheque
    bool peutLeverHypotheque = false;
    if (_plateau->GetJoueurActuel()->PeutLeverHypotheque())
        peutLeverHypotheque = true;

    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ConstruireKey)->SetCanDraw(peutConstruire);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::HypothequerKey)->SetCanDraw(peutHypothequer);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::LeverHypothequeKey)->SetCanDraw(peutLeverHypotheque);
}

void Jeu::UpdateAppartenance()
{
    for (int i = 0; i < 40; i++)
    {
        Case* casePlateau = _plateau->GetCase(i);
        if (casePlateau->Achetable())
        {
            Propriete* propriete = (Propriete*) casePlateau;
            Appartenance* appartenance = (Appartenance*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::AppartenanceKey + intToString(i));

            Joueur* proprietaire = propriete->GetProprietaire();

            if (proprietaire != NULL)
            {
                Pion* pion = (Pion*) _graphicEngine->GetGuiManager()->GetGuiItem(proprietaire->GetNom());
                appartenance->SetColor(pion->GetColor());
                appartenance->SetCanDraw(true);

                if (propriete->EstHypotheque())
                    appartenance->SetNbMaisons("H");
                else if(propriete->PeutConstruire())
                {
                    Domaine* domaine = (Domaine*) casePlateau;
                    appartenance->SetNbMaisons(domaine->GetNombreMaisons());
                }
                else
                    appartenance->SetNbMaisons("P");
            }
        }
    }
}

void Jeu::UpdateJoueurActuel()
{
    TextBlock* actionsPossiblesPourTextBlock = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ActionsPossiblesPourKey);
    actionsPossiblesPourTextBlock->SetContent(_plateau->GetJoueurActuel()->GetNom() + " :");

    int j = 0;
    for (int i = JeuConstantes::NbBillets - 1; i >= 0; i--)
    {
        TextBlock* nbBillets = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::NbBilletsKeys[j]);
        nbBillets->SetContent(intToString(_plateau->GetJoueurActuel()->GetBilletManager()->GetBillets()[i].first));
        j++;
    }
    SetPositionJoueur(_plateau->GetJoueurActuel());
}

void Jeu::SetSommeAPayer(int somme)
{
    _sommeAPayer = somme;
    _billetManagerARemplir->Vider();
    UpdateSommeAPayer();
}

void Jeu::UpdateSommeAPayer()
{
    int somme;

    if (_billetACasser > 0)
        somme = _billetACasser;
    else if (_sommeAPayer != 0)
        somme = _sommeAPayer;


    std::string sommeBilletsString = intToString(_billetManagerARemplir->SommeBillets());
    std::string sommeString = intToString(somme);

    TextBlock* sommeAPayer = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::SommeAPayerKey);
    sommeAPayer->SetContent(JeuConstantes::SommeAPayerKey + sommeBilletsString + " / " + sommeString);

    GuiItem* resetButton = _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ResetBilletsKey);
    resetButton->SetX(sommeAPayer->GetSizeX() + sommeAPayer->GetX() + 10);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ValiderBilletsKey)->SetX(resetButton->GetSizeX() + resetButton->GetX() + 10);
    AfficherSommeAPayer(true);

    UpdateJoueurActuel();
}

BilletManager* Jeu::GetBilletManagerARemplir()
{
    return _billetManagerARemplir;
}

int Jeu::GetBilletACasser()
{
    return _billetACasser;
}

void Jeu::SetBilletACasser(int somme)
{
    _billetACasser = somme;

    if (somme != -1)
    {
        _billetManagerARemplir->Vider();
        UpdateSommeAPayer();
    }
}

void Jeu::AfficherVoulezVousPayer(bool affich)
{
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::VoulezVousPayerKey)->SetCanDraw(affich);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::NonPayerKey)->SetCanDraw(affich);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::OuiPayerKey)->SetCanDraw(affich);
}

void Jeu::AfficherLancerDes(bool affich)
{
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::LancerLesDesKey)->SetCanDraw(affich);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::De1Key)->SetCanDraw(affich);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::De2Key)->SetCanDraw(affich);
}

void Jeu::AfficherSommeAPayer(bool affich)
{
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::SommeAPayerKey)->SetCanDraw(affich);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::ResetBilletsKey)->SetCanDraw(affich);
}

void Jeu::AfficherActionsPossibles(bool affichFaireMonnaie, bool affichFinirTour)
{
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::FaireMonnaieKey)->SetCanDraw(affichFaireMonnaie);
    _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::FinirTourKey)->SetCanDraw(affichFinirTour);
}

int Jeu::GetSommeAPayer()
{
    return _sommeAPayer;
}

Propriete* Jeu::GetProprieteACliquer()
{
    return _proprieteACliquer;
}

void Jeu::SetProprieteACliquer(Propriete* propriete)
{
    _proprieteACliquer = propriete;
}

ACTIONAPPARTENANCE Jeu::GetActionAppartenance()
{
    return _actionAppartenance;
}

void Jeu::SetActionAppartenance(ACTIONAPPARTENANCE action)
{
    _actionAppartenance = action;
}

void Jeu::UpdateFinirTour()
{
    _sommeAPayer = 0;
    _billetACasser = 0;
    _plateau->FinirTour();
    AfficherActionsPossibles(false);

    if (_plateau->EstFini())
    {
        TextBlock* message = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
        message->SetContent("La partie est finie. Le gagnant est : " + _plateau->GetJoueurActuel()->GetNom());
        AfficherLancerDes(false);
    }
    else
    {
        _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey)->SetCanDraw(false);
        AfficherLancerDes(true);
    }

    UpdatePlateau();
}

void Jeu::SetPositionJoueur(Joueur* joueur)
{
    Pion* pion = (Pion*) _graphicEngine->GetGuiManager()->GetGuiItem(joueur->GetNom());
    position pos = GetCentreCase(joueur->GetPosition());

    pion->SetX(pos.x);
    pion->SetY(pos.y);
    _graphicEngine->Draw();
}

position Jeu::GetCentreCase(int pos)
{
    int h = JeuConstantes::HauteurCase;
    int t = JeuConstantes::TailleCase;
    Image* imagePlateau = (Image*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::PlateauPath);
    int xmax = imagePlateau->GetSizeX();
    int ymax = imagePlateau->GetSizeY();
    int i, x, y;

    if (pos == 0)
    {
        x = y = xmax - h / 2;
    }
    else if (pos == 10)
    {
        x = h / 2;
        y = ymax - h / 2;
    }
    else if (pos == 20)
    {
        x = y = h / 2;
    }
    else if (pos == 30)
    {
        x = xmax - h / 2;
        y = h / 2;
    }
    else if (pos <= 10)
    {
        i = 10 - pos;
        x = i * t + t / 4 + t;
        y = ymax - h / 2;
    }
    else if (pos <= 20)
    {
        i = 20 - pos;
        x = h / 2;
        y = i * t + t / 4 + t;
    }
    else if (pos <= 30)
    {
        i = pos - 20;
        x = i * t + t / 4 + t;
        y = h / 2;
    }
    else
    {
        i = pos - 30;
        x = xmax - h / 2;
        y = i * t + t / 4 + t;
    }

    position posi;
    posi.x = x;
    posi.y = y;

    return posi;
}

void Jeu::AgirJoueur()
{
    Joueur* joueurActuel = _plateau->GetJoueurActuel();
    
    Case* caseActuelle = _plateau->GetCase(joueurActuel->GetPosition());

    //Actions possibles
    TextBlock* caseMessage = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    caseMessage->SetCanDraw(true);
    caseMessage->SetContent(caseActuelle->GetMessage());

    ACTION action = caseActuelle->DoitPayer(joueurActuel);
    
    bool canFinirTour = false;

    //DOITPAYER, DOITETREPAYE, PEUTPAYER, RIEN
    if (action == DOITPAYER)
    {
        int sommeAPayer = caseActuelle->SommeAPayer();
        SetSommeAPayer(sommeAPayer);
        
        if(!joueurActuel->PeutPayer(sommeAPayer))
        {
            _plateau->JoueurActuelAPerdu();
            caseMessage->SetContent("Vous avez perdu !");
            canFinirTour = true;
        }
    }
    else if (action == DOITETREPAYE)
    {
        //Non implemente
        canFinirTour = true;
    }
    else if (action == PEUTPAYER)
    {
        AfficherVoulezVousPayer(true);
    }
    else if (action == RIEN)
    {
        caseActuelle->Agir(joueurActuel);
        canFinirTour = true;
    }
    else if(action == ESTDEPLACE)
    {
        AgirJoueur();
    }
    
    AfficherActionsPossibles(true, canFinirTour);
}

void Jeu::LancerLesDes()
{
    Joueur* joueurActuel = _plateau->GetJoueurActuel();

    int de1 = De::Lancer();
    int de2 = De::Lancer();
    SetImageDe(JeuConstantes::De1Key, de1);
    SetImageDe(JeuConstantes::De2Key, de2);

    sf::Clock clock;
    clock.Reset();
    int cpt = 0;
    while (cpt < de1 + de2)
    {
        if (clock.GetElapsedTime() > 0.4)
        {
            joueurActuel->Avancer(1);
            UpdateJoueurActuel();
            cpt++;
            clock.Reset();
        }
    }
    joueurActuel->SetAFaitDouble(de1, de2);
    

//        joueurActuel->Avancer(1);
//    joueurActuel->Avancer(de1, de2);
    UpdateJoueurActuel();

    //Enlève comme action possible lancer les dés
    AfficherLancerDes(false);

    AgirJoueur();
}

void Jeu::SetImageDe(std::string deKey, int de)
{
    Image* deImage = (Image*) _graphicEngine->GetGuiManager()->GetGuiItem(deKey);
    deImage->SetFilePath(JeuConstantes::DesPaths[de - 1]);
    deImage->SetCanDraw(true);
}