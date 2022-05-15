#ifndef SimpleTestSuite1_h__
#define SimpleTestSuite1_h__

#include <iostream>
#include <noisetest/UnitTestSuite.h>

using namespace std;

void test_this_is_a_unittest1();

class SimpleTestSuite1: public NoiseTest::UnitTestSuite
{
protected:
	virtual void registerTests();

public:
	SimpleTestSuite1();
	virtual ~SimpleTestSuite1();
};

#endif // SimpleTestSuite1_h__
