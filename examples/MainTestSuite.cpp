#include "MainTestSuite.h"
#include "SimpleTestSuite1.h"
#include "SimpleTestSuite2.h"

MainTestSuite::MainTestSuite(): UnitTestSuite("Main Test Suite", 0)
{

}

MainTestSuite::~MainTestSuite()
{

}

void MainTestSuite::registerTests()
{
	registerTest(new SimpleTestSuite1);
	registerTest(new SimpleTestSuite2);
}
