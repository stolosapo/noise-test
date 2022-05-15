#include <iostream>
#include <noisetest/UnitTestSuite.h>
#include "MainTestSuite.h"

using namespace std;

int main(int argc, char* argv[])
{
    cout << "NoiseTest Library Example" << endl << endl;

    MainTestSuite suite;

	suite.test();

	bool passed = suite.report();
	int count = suite.getCount();
	int passes = suite.getPassedCount();
	int ignored = suite.getIgnoredCount();
	int failures = count - passes - ignored;

	cout << endl ;
	cout << "Results:" << endl << endl;
	cout << "Test run: " << count << ", Failures: " << failures << ", Skipped: " << ignored << endl;
	cout << endl;
}
