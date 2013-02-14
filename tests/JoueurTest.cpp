/*
 * File:   JoueurTest.cpp
 * Author: manu
 *
 * Created on 14 févr. 2013, 14:35:36
 */

#include "JoueurTest.h"
#include "Participant/Joueur.h"
#include "Case/Case.h"


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
	_joueur->Avancer(26);
	CPPUNIT_ASSERT(_joueur->GetPosition() == 36);
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

