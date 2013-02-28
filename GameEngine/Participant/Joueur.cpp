#include "Joueur.h"
#include "../Case/Case.h"
#include "../Case/Propriété/Propriete.h"
#include "GameEngine/Plateau.h"
#include "GameEngine/Case/Prison.h"
#include "GameEngine/Case/Propriété/Domaine.h"

Joueur::Joueur(Plateau *plateau, std::string nom) : Participant(plateau, nom)
{
    _position = 0;
    _tour = 0;
    _nombreCartesSortirPrison = 0;
    _nbDoubles = 0;
    _aPerdu = false;
}

void Joueur::Avancer(int valeur)
{
    _position += valeur;

    if (_position > 39)
    {
        GagnerArgentCaseDepart();
        _position -= 40;
    }
}

void Joueur::Avancer(int de1, int de2)
{
    Avancer(de1 + de2);
    SetAFaitDouble(de1, de2);
}

void Joueur::SetAFaitDouble(int de1, int de2)
{
    if (de1 == de2)
        _nbDoubles++;
    else
        _nbDoubles = 0;

    //Si 3 doubles => prison
    if (_nbDoubles == 3)
    {
        _nbDoubles = 0;
        Prison * prison = (Prison*) _plateau->GetCase(10);
        prison->AjouterPrisonnier(this);
    }
    _derniersDes = de1 + de2;
}

void Joueur::Acheter(Propriete *propriete)
{
    _proprietes.push_back(propriete);
}

bool Joueur::PeutPayer(int somme)
{
    if (!_billetManager->PeutPayer(somme))
        return false;


}

void Joueur::Construire(Domaine *domaine)
{
    if (domaine->PeutConstruire())
        domaine->Construire();
}

void Joueur::Detruire(Domaine *domaine)
{
    if (domaine->PeutDetruire())
        domaine->Detruire();
}

void Joueur::Hypothequer(Propriete *propriete)
{
    BilletManager* billetManagerValHypotheque = new BilletManager(propriete->GetValeurHypotheque());
    _billetManager->Ajouter(billetManagerValHypotheque);
    delete billetManagerValHypotheque;
}

void Joueur::LeverHypotheque(Propriete *propriete, BilletManager* billetManager)
{
    _billetManager->Ajouter(billetManager);
    propriete->LeverHypotheque();
}

void Joueur::Placer(Case *caseAPlacer, bool passerParDepart)
{
    if (caseAPlacer->GetNumero() < _position && passerParDepart)
        GagnerArgentCaseDepart();

    _position = caseAPlacer->GetNumero();
}

void Joueur::InitialiserBillets()
{
    _billetManager->Ajouter(2, BILLET500);
    _billetManager->Ajouter(4, BILLET100);
    _billetManager->Ajouter(1, BILLET50);
    _billetManager->Ajouter(1, BILLET20);
    _billetManager->Ajouter(2, BILLET10);
    _billetManager->Ajouter(1, BILLET5);
    _billetManager->Ajouter(5, BILLET1);
}

int Joueur::GetPosition()
{
    return _position;
}

void Joueur::GagnerArgentCaseDepart()
{
    //_billetManager->Ajouter(2, BILLET100);
    _plateau->GetCase(0)->Agir(this);
    //    Depart* depart = new Depart();
    //    depart->Agir(this);
    //    delete depart;

    _tour++;
}

bool Joueur::PossedeCarteSortirPrison()
{
    return _nombreCartesSortirPrison != 0;
}

void Joueur::AjouterCarteSortirPrison()
{
    _nombreCartesSortirPrison++;
}

void Joueur::EnleverCarteSortirPrison()
{
    _nombreCartesSortirPrison--;
}

bool Joueur::AFaitDouble()
{
    return _nbDoubles > 0;
}

int Joueur::GetNbTours()
{
    return _tour;
}

int Joueur::GetDerniersDes()
{
    return _derniersDes;
}

void Joueur::Perdre()
{
    _aPerdu = true;
}

bool Joueur::APerdu()
{
    return _aPerdu;
}

bool Joueur::PeutConstruire()
{
    for(int i=0; i<_proprietes.size(); i++)
    {
        if(_proprietes[i]->PeutConstruire())
            return true;
    }
    
    return false;
}

std::vector<Propriete*> Joueur::GetProprietes()
{
    return _proprietes;
}