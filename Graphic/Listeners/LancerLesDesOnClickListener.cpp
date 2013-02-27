#include "LancerLesDesOnClickListener.h"
#include "GameEngine/De.h"
#include "GraphicEngine/GraphicEngine.h"
#include "GraphicEngine/GuiManager/GuiManager.h"
#include "Graphic/JeuConstantes.h"
#include "GraphicEngine/GuiManager/GuiItem/Image.h"
#include "Graphic/Jeu.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Participant/Joueur.h"
#include "../../GraphicEngine/GuiManager/GuiItem/Button.h"
#include "GraphicEngine/GuiManager/GuiItem/TextBlock.h"
#include "GameEngine/Case/Case.h"

LancerLesDesOnClickListener::LancerLesDesOnClickListener(EVENTTYPE eventType, Button* lancerLesDesBouton, GraphicEngine* graphicEngine, Jeu* jeu) : ActionListener(eventType, lancerLesDesBouton, graphicEngine)
{
    _jeu = jeu;
}

void LancerLesDesOnClickListener::Act(sf::Event)
{
    Joueur* joueurActuel = _jeu->GetPlateau()->GetJoueurActuel();

    int de1 = De::Lancer();
    int de2 = De::Lancer();
    SetImageDe(JeuConstantes::De1Key, de1);
    SetImageDe(JeuConstantes::De2Key, de2);

//    sf::Clock clock;
//    clock.Reset();
//    int cpt = 0;
//    while (cpt < de1 + de2)
//    {
//        if (clock.GetElapsedTime() > 0.5)
//        {
//            joueurActuel->Avancer(1);
//            _jeu->UpdateJoueurActuel();
//            cpt++;
//            clock.Reset();
//        }
//    }
//    joueurActuel->SetAFaitDouble(de1, de2);
    
    joueurActuel->Avancer(de1, de2);
    _jeu->UpdateJoueurActuel();

    //Enlève comme action possible lancer les dés
    _jeu->AfficherLancerDes(false);

    Case* caseActuelle = _jeu->GetPlateau()->GetCase(joueurActuel->GetPosition());

    //Actions possibles
    TextBlock* caseMessage = (TextBlock*) _graphicEngine->GetGuiManager()->GetGuiItem(JeuConstantes::CaseMessageKey);
    caseMessage->SetCanDraw(true);
    caseMessage->SetContent(caseActuelle->GetMessage());

    ACTION action = caseActuelle->DoitPayer(joueurActuel);

    //DOITPAYER, DOITETREPAYE, PEUTPAYER, RIEN
    if (action == DOITPAYER)
    {
        int sommeAPayer = caseActuelle->SommeAPayer();
        _jeu->SetSommeAPayer(sommeAPayer);
    }
    else if (action == DOITETREPAYE)
    {
    }
    else if (action == PEUTPAYER)
    {
        _jeu->AfficherVoulezVousPayer(true);
    }
    else if (action == RIEN)
    {
        caseActuelle->Agir(joueurActuel);
    }
    
    _jeu->AfficherActionsPossibles(true, false);
}

void LancerLesDesOnClickListener::SetImageDe(std::string deKey, int de)
{
    Image* deImage = (Image*) _graphicEngine->GetGuiManager()->GetGuiItem(deKey);
    deImage->SetFilePath(JeuConstantes::DesPaths[de - 1]);
    deImage->SetCanDraw(true);
}