#include <vector>

#include "BilletManager.h"
#include "Billet.h"

BilletManager::BilletManager(int somme)
{
	SetSomme(somme);

	//	Billet *billet1, *billet5, *billet10, *billet20, *billet50, *billet100, *billet500;
	//	billet1 = new Billet(1);
	//	billet5 = new Billet(5);
	//	billet10 = new Billet(10);
	//	billet20 = new Billet(20);
	//	billet50 = new Billet(50);
	//	billet100 = new Billet(100);
	//	billet500 = new Billet(500);
	//	
	//	NbBillets nbBillets1;
	//	nbBillets1.first = nbBillet1;
	//	nbBillets1.second = billet1;
	//	
	//	NbBillets nbBillets5;
	//	nbBillets5.first = nbBillet5;
	//	nbBillets5.second = billet5;
	//	
	//	NbBillets nbBillets10;
	//	nbBillets10.first = nbBillet10;
	//	nbBillets10.second = billet10;
	//	
	//	NbBillets nbBillets20;
	//	nbBillets20.first = nbBillet20;
	//	nbBillets20.second = billet20;
	//	
	//	NbBillets nbBillets50;
	//	nbBillets50.first = nbBillet50;
	//	nbBillets50.second = billet50;
	//	
	//	NbBillets nbBillets100;
	//	nbBillets100.first = nbBillet100;
	//	nbBillets100.second = billet100;
	//	
	//	NbBillets nbBillets500;
	//	nbBillets500.first = nbBillet500;
	//	nbBillets500.second = billet500;
	//	
	//	_billets.push_back(nbBillets1);
	//	_billets.push_back(nbBillets5);
	//	_billets.push_back(nbBillets10);
	//	_billets.push_back(nbBillets20);
	//	_billets.push_back(nbBillets50);
	//	_billets.push_back(nbBillets100);
	//	_billets.push_back(nbBillets500);
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