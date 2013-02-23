#include <vector>

#include "BilletManager.h"
#include "Billet.h"

BilletManager::BilletManager(int somme)
{
	SetSomme(somme);
}

BilletManager::~BilletManager()
{
	for(int i = 0; i < _billets.size(); i++)
	{
		delete _billets[i].second;
	}

	_billets.clear();
}

void BilletManager::Ajouter(int nb, int billet)
{
	_billets[billet].first += nb;
}

void BilletManager::Ajouter(BilletManager* billetManager)
{
	for(int i = 0; i < _billets.size(); i++)
	{
		_billets[i].first += billetManager->GetBillets()[i].first;
	}
}

void BilletManager::Enlever(int nb, int billet)
{
	_billets[billet].first -= nb;

	if(_billets[billet].first < 0)
		_billets[billet].first = 0;
}

Billets BilletManager::GetBillets()
{
	return _billets;
}

int BilletManager::SommeBillets()
{
	int somme = 0;

	for(int i = 0; i < _billets.size(); i++)
	{
		somme += _billets[i].second->GetValeur() * _billets[i].first;
	}

	return somme;
}

void BilletManager::Vider()
{
	for(int i = 0; i < _billets.size(); i++)
	{
		_billets[i].first = 0;
	}
}

void BilletManager::SetSomme(int somme)
{
	int nbBillets = 7;
	int valeurBillets[7] = {1, 5, 10, 20, 50, 100, 500};
	int restant = somme;

	for(int i = nbBillets - 1; i >= 0; i--)
	{
		int nb;

		if(restant < valeurBillets[i])
			nb = 0;
		else
		{
			nb = 1;
			while(restant % (valeurBillets[i] * nb) > valeurBillets[i])
				nb++;
		}

		NbBillets nbBillets;
		nbBillets.first = nb;
		nbBillets.second = new Billet(valeurBillets[i]);
		_billets.push_back(nbBillets);

		restant -= valeurBillets[i] * nb;
	}
}

bool BilletManager::PeutPayer(int somme)
{
	return SommeBillets() >= somme;
}