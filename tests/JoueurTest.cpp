/*
 * File:   JoueurTest.cpp
 * Author: manu
 *
 * Created on 14 févr. 2013, 14:35:36
 */

#include "JoueurTest.h"
#include "GameEngine/Participant/Joueur.h"
#include "GameEngine/Case/Case.h"


CPPUNIT_TEST_SUITE_REGISTRATION(JoueurTest);

JoueurTest::JoueurTest()
{
}

JoueurTest::~JoueurTest()
{
}

void JoueurTest::setUp()
{
	_joueur = new Joueur();
}

void JoueurTest::tearDown()
{
	delete _joueur;
}

void JoueurTest::testAvancer()
{
	CPPUNIT_ASSERT(_joueur->GetPosition() == 0);
	_joueur->Avancer(10);
	CPPUNIT_ASSERT(_joueur->GetPosition() == 10);
	_joueur->Avancer(29);
	CPPUNIT_ASSERT(_joueur->GetPosition() == 39);
	_joueur->Avancer(2);
	CPPUNIT_ASSERT(_joueur->GetPosition() == 1);
}

void JoueurTest::testInitialiserBillets()
{
	CPPUNIT_ASSERT(_joueur->SommeBillets() == 0);
	_joueur->InitialiserBillets();
	CPPUNIT_ASSERT(_joueur->SommeBillets() == 1500);
}

void JoueurTest::testPeutPayer()
{
	int somme = 500;
	CPPUNIT_ASSERT(!_joueur->PeutPayer(somme));
	_joueur->InitialiserBillets();
	CPPUNIT_ASSERT(_joueur->PeutPayer(somme));
	CPPUNIT_ASSERT(!_joueur->PeutPayer(1600));
}

void JoueurTest::testPlacer()
{
	Case* caseAPlacer = new Case(10);
	CPPUNIT_ASSERT(_joueur->GetPosition() == 0);
	_joueur->Placer(caseAPlacer);
	CPPUNIT_ASSERT(_joueur->GetPosition() == 10);
}

void JoueurTest::testCrediter()
{
	BilletManager* billetManager = new BilletManager();
	billetManager->Ajouter(1, BILLET10);

	CPPUNIT_ASSERT(_joueur->SommeBillets() == 0);

	_joueur->Crediter(billetManager);
	CPPUNIT_ASSERT(_joueur->SommeBillets() == 10);

	billetManager->Enlever(1, BILLET10);
	billetManager->Ajouter(1, BILLET50);

	_joueur->Crediter(billetManager);
	CPPUNIT_ASSERT(_joueur->SommeBillets() == 60);
}

void JoueurTest::testPayer()
{
	int somme = 120;
	Participant* crediteur = new Joueur();
	CPPUNIT_ASSERT(_joueur->SommeBillets() == 0);

	BilletManager* billetManager = new BilletManager();
	billetManager->Ajouter(1, BILLET1);
	billetManager->Ajouter(1, BILLET5);
	billetManager->Ajouter(1, BILLET10);
	billetManager->Ajouter(1, BILLET20);
	billetManager->Ajouter(1, BILLET50);
	billetManager->Ajouter(1, BILLET100);
	billetManager->Ajouter(1, BILLET500);

	_joueur->Crediter(billetManager);

	BilletManager* result = _joueur->Payer(somme);
	crediteur->Crediter(result);
	CPPUNIT_ASSERT(crediteur->SommeBillets() == somme);
}