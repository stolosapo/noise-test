#include "SimpleTestSuite1.h"

#include <noisetest/Assertion.h>

SimpleTestSuite1::SimpleTestSuite1(): UnitTestSuite("Simple Test Suite 1", 0)
{

}

SimpleTestSuite1::~SimpleTestSuite1()
{

}

void SimpleTestSuite1::registerTests()
{
	registerTest("This is a unit test", &test_this_is_a_unittest1);
}

void test_this_is_a_unittest1()
{
    // Do some serious unit testing here...
    int expected = 100;
    int result = 100;

	NoiseTest::assertEqual(expected, result);
}
