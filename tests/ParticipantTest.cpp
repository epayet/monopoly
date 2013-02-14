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
	NbBillets nbBillets;
	nbBillets.first = 1;
	nbBillets.second = new Billet(10);
	Billets billets;
	billets.push_back(nbBillets);
	
	CPPUNIT_ASSERT(_participant->SommeBillets() == 0);
	
	_participant->Crediter(billets);
	CPPUNIT_ASSERT(_participant->SommeBillets() == 10);
	
	nbBillets.second = new Billet(50);
	
	_participant->Crediter(billets);
	CPPUNIT_ASSERT(_participant->SommeBillets() == 60);
}

void ParticipantTest::testPayer()
{
	int somme = 120;
	Participant* crediteur = new Participant();
	CPPUNIT_ASSERT(_participant->SommeBillets() == 0);
	
	Billet* billet10, *billet20, *billet50, *billet100, *billet500;
	billet10 = new Billet(10);
	billet20 = new Billet(20);
	billet50 = new Billet(50);
	billet100 = new Billet(100);
	billet500 = new Billet(500);
	
	NbBillets nbBillets10;
	nbBillets10.first = 1;
	nbBillets10.second = billet10;
	
	NbBillets nbBillets20;
	nbBillets20.first = 1;
	nbBillets20.second = billet20;
	
	NbBillets nbBillets50;
	nbBillets50.first = 1;
	nbBillets50.second = billet50;
	
	NbBillets nbBillets100;
	nbBillets100.first = 1;
	nbBillets100.second = billet100;
	
	NbBillets nbBillets500;
	nbBillets500.first = 1;
	nbBillets500.second = billet500;
	
	Billets billets;
	billets.push_back(nbBillets10);
	billets.push_back(nbBillets20);
	billets.push_back(nbBillets50);
	billets.push_back(nbBillets100);
	billets.push_back(nbBillets500);
	
	_participant->Crediter(billets);
	
	Billets result = _participant->Payer(somme);
	crediteur->Crediter(result);
	CPPUNIT_ASSERT(crediteur->SommeBillets() == somme);
	
}

