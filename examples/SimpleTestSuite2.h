#ifndef SimpleTestSuite2_h__
#define SimpleTestSuite2_h__

#include <iostream>
#include <noisetest/UnitTestSuite.h>

using namespace std;

void test_this_is_a_unittest_that_fails();

class SimpleTestSuite2: public NoiseTest::UnitTestSuite
{
protected:
	virtual void registerTests();

public:
	SimpleTestSuite2();
	virtual ~SimpleTestSuite2();
};

#endif // SimpleTestSuite2_h__
