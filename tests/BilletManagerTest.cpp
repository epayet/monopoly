/*
 * File:   BilletManagerTest.cpp
 * Author: manu
 *
 * Created on 15 févr. 2013, 12:13:59
 */

#include "BilletManagerTest.h"
#include "GameEngine/Billet/BilletManager.h"

CPPUNIT_TEST_SUITE_REGISTRATION(BilletManagerTest);

BilletManagerTest::BilletManagerTest()
{
}

BilletManagerTest::~BilletManagerTest()
{
}

void BilletManagerTest::setUp()
{
	_billetManager = new BilletManager();
}

void BilletManagerTest::tearDown()
{
	delete _billetManager;
}

void BilletManagerTest::testAjouter()
{
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->Ajouter(0, BILLET10);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->Ajouter(1, BILLET10);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 10);
	_billetManager->Ajouter(2, BILLET500);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 1010);
}

void BilletManagerTest::testAjouter2()
{
	BilletManager* billetManager = new BilletManager();
	billetManager->Ajouter(10, BILLET100);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->Ajouter(billetManager);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 1000);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == billetManager->SommeBillets());
}

void BilletManagerTest::testEnlever()
{
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->Ajouter(10, BILLET100);
	_billetManager->Ajouter(1, BILLET50);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 1050);
	_billetManager->Enlever(1, BILLET1);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 1050);
	_billetManager->Enlever(5, BILLET100);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 550);
	_billetManager->Enlever(5, BILLET100);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 50);
	_billetManager->Enlever(1, BILLET50);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->Enlever(5, BILLET100);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
}

void BilletManagerTest::testVider()
{
	_billetManager->Ajouter(10, BILLET100);
	_billetManager->Ajouter(1, BILLET20);
	_billetManager->Ajouter(1, BILLET10);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 1030);
	_billetManager->Vider();
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->Vider();
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
}

void BilletManagerTest::testSetSomme()
{
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 0);
	_billetManager->SetSomme(161);
	CPPUNIT_ASSERT(_billetManager->SommeBillets() == 161);
}