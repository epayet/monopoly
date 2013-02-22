/*
 * File:   ParticipantTest.cpp
 * Author: manu
 *
 * Created on 8 févr. 2013, 15:51:44
 */

#include "ParticipantTest.h"
#include "Participant/Participant.h"

CPPUNIT_TEST_SUITE_REGISTRATION(ParticipantTest);

ParticipantTest::ParticipantTest()
{
}

ParticipantTest::~ParticipantTest()
{
}

void ParticipantTest::setUp()
{
	_participant = new Participant();
}

void ParticipantTest::tearDown()
{
	delete _participant;
}

void ParticipantTest::testCrediter()
{
	BilletManager* billetManager = new BilletManager();
	billetManager->Ajouter(1, BILLET10);

	CPPUNIT_ASSERT(_participant->SommeBillets() == 0);

	_participant->Crediter(billetManager);
	CPPUNIT_ASSERT(_participant->SommeBillets() == 10);

	billetManager->Enlever(1, BILLET10);
	billetManager->Ajouter(1, BILLET50);

	_participant->Crediter(billetManager);
	CPPUNIT_ASSERT(_participant->SommeBillets() == 60);
}

void ParticipantTest::testPayer()
{
	int somme = 120;
	Participant* crediteur = new Participant();
	CPPUNIT_ASSERT(_participant->SommeBillets() == 0);

	BilletManager* billetManager = new BilletManager();
	billetManager->Ajouter(1, BILLET1);
	billetManager->Ajouter(1, BILLET5);
	billetManager->Ajouter(1, BILLET10);
	billetManager->Ajouter(1, BILLET20);
	billetManager->Ajouter(1, BILLET50);
	billetManager->Ajouter(1, BILLET100);
	billetManager->Ajouter(1, BILLET500);

	_participant->Crediter(billetManager);

	BilletManager* result = _participant->Payer(somme);
	crediteur->Crediter(result);
	CPPUNIT_ASSERT(crediteur->SommeBillets() == somme);
}

