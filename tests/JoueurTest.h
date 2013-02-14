/*
 * File:   JoueurTest.h
 * Author: manu
 *
 * Created on 14 févr. 2013, 14:35:35
 */

#ifndef JOUEURTEST_H
#define	JOUEURTEST_H

class Joueur;

#include <cppunit/extensions/HelperMacros.h>

class JoueurTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(JoueurTest);

	CPPUNIT_TEST(testAvancer);
	CPPUNIT_TEST(testInitialiserBillets);
	CPPUNIT_TEST(testPeutPayer);
	CPPUNIT_TEST(testPlacer);

	CPPUNIT_TEST_SUITE_END();

public:
	JoueurTest();
	virtual ~JoueurTest();
	void setUp();
	void tearDown();

private:
	void testAvancer();
	void testInitialiserBillets();
	void testPeutPayer();
	void testPlacer();
	
	Joueur* _joueur;

};

#endif	/* JOUEURTEST_H */

