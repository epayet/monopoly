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
}

void ParticipantTest::tearDown()
{
}

void ParticipantTest::testCrediter()
{
	Billets billets;
	Participant *participant = new Participant();
	participant->Crediter(billets);
	if(true /*check result*/)
	{
		CPPUNIT_ASSERT(false);
	}
}

void ParticipantTest::testPayer()
{
	int somme;
	Participant* crediteur;
	Participant *participant = new Participant();
	Billets result = participant->Payer(somme, crediteur);
	if(true /*check result*/)
	{
		CPPUNIT_ASSERT(false);
	}
}

