/*
 * File:   BilletManagerTest.h
 * Author: manu
 *
 * Created on 15 févr. 2013, 12:13:58
 */

#ifndef BILLETMANAGERTEST_H
#define	BILLETMANAGERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class BilletManager;

class BilletManagerTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(BilletManagerTest);

	CPPUNIT_TEST(testAjouter);
	CPPUNIT_TEST(testAjouter2);
	CPPUNIT_TEST(testEnlever);
	CPPUNIT_TEST(testVider);
	CPPUNIT_TEST(testSetSomme);

	CPPUNIT_TEST_SUITE_END();

public:
	BilletManagerTest();
	virtual ~BilletManagerTest();
	void setUp();
	void tearDown();

private:
	void testAjouter();
	void testAjouter2();
	void testEnlever();
	void testVider();
	void testSetSomme();
	
	BilletManager* _billetManager;

};

#endif	/* BILLETMANAGERTEST_H */

