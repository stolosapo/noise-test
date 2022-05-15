#include "SimpleTestSuite2.h"

#include <noisetest/Assertion.h>

SimpleTestSuite2::SimpleTestSuite2(): UnitTestSuite("Simple Test Suite 2", 0)
{

}

SimpleTestSuite2::~SimpleTestSuite2()
{

}

void SimpleTestSuite2::registerTests()
{
	registerTest("This is a unit test that fails", &test_this_is_a_unittest_that_fails);
}

void test_this_is_a_unittest_that_fails()
{
    // Do some serious unit testing here...
    int expected = 100;
    int result = 101;

	NoiseTest::assertEqual(expected, result);
}
