/*
 * File:   ParticipantTest.h
 * Author: manu
 *
 * Created on 8 févr. 2013, 15:51:43
 */

#ifndef PARTICIPANTTEST_H
#define	PARTICIPANTTEST_H

#include <cppunit/extensions/HelperMacros.h>

class ParticipantTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(ParticipantTest);

	CPPUNIT_TEST(testCrediter);
	CPPUNIT_TEST(testPayer);

	CPPUNIT_TEST_SUITE_END();

public:
	ParticipantTest();
	virtual ~ParticipantTest();
	void setUp();
	void tearDown();

private:
	void testCrediter();
	void testPayer();

};

#endif	/* PARTICIPANTTEST_H */

