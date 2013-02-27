#include "Joueur.h"
#include "../Case/Case.h"
#include "../Case/Propriété/Propriete.h"

Joueur::Joueur(std::string nom) : Participant(nom)
{
	_position = 0;
    _tour = 0;
    _nombreCartesSortirPrison = 0;
    _nbDoubles = 0;
}

Joueur::~Joueur()
{
	for(int i = 0; i < _proprietes.size(); i++)
	{
		delete _proprietes[i];
	}

	_proprietes.clear();
}

void Joueur::Avancer(int valeur)
{
	_position += valeur;

	if(_position > 39)
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
    if(de1 == de2)
        _nbDoubles++;
    else 
        _nbDoubles = 0;
    
    //Si 3 doubles => prison
    if(_nbDoubles == 3)
    {
        _nbDoubles = 0;
        //Go prison
    }
}

void Joueur::Acheter(Propriete *propriete)
{
	_proprietes.push_back(propriete);
	propriete->Acheter(this);
}

bool Joueur::PeutPayer(int somme)
{
	return _billetManager->PeutPayer(somme);
}

void Joueur::Construire(Propriete *propriete)
{
    
}

void Joueur::Detruire(Propriete *propriete)
{

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
	if(caseAPlacer->GetNumero() < _position && passerParDepart)
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
	_billetManager->Ajouter(2, BILLET100);
    
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