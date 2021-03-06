#ifndef UnitTestSuite_h__
#define UnitTestSuite_h__

#include <iostream>
#include <string>
#include <vector>

#include "UnitTest.h"
#include "UnitTestFunction.h"

using namespace std;

namespace NoiseTest
{
    class UnitTestSuite: public UnitTest
    {
    private:
        int level;
        int methodsToCoverCount;

        vector<UnitTest*> unitTests;
        vector<string> methodsCovered;

    protected:
        virtual void registerTests() = 0;

        void registerCoveredMethod(string methodName);

        void registerTest(UnitTest* test);
        void registerTest(string description, UnitTestFunction unitTestFunction);
        void ignoreTest(string description, UnitTestFunction unitTestFunction);

    public:
        UnitTestSuite(string description, int methodsToCoverCount);
        virtual ~UnitTestSuite();

        virtual void test();
        virtual bool report();

        void setLevel(int level);
        int getCount();
        int getPassedCount();
        int getIgnoredCount();
        int getMethodsToCoverCount();
        int getMethodsCoveredCount();
        double getCoverage();
    };
}

#endif // UnitTestSuite_h__
