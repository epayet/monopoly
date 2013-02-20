#include "Participant.h"

Participant::Participant(std::string nom)
{
	_nom = nom;
	_billetManager = new BilletManager();
}

Participant::~Participant()
{
	delete _billetManager;
}

BilletManager* Participant::Payer(int somme)
{
	return new BilletManager(somme);
}

void Participant::Crediter(BilletManager *billetManager)
{
	_billetManager->Ajouter(billetManager);
}

int Participant::SommeBillets()
{
	return _billetManager->SommeBillets();
}

std::string Participant::GetNom()
{
	return _nom;
}

BilletManager* Participant::GetBilletManager()
{
	return _billetManager;
}