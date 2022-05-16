#include "Logger.h"

#define RESET           "\033[0m"
#define ERROR_COLOR     "\033[31m"      /* Red */
#define PASSED_COLOR    "\033[32m"      /* Green */
#define IGNORED_COLOR   "\033[33m"      /* Yellow */

using namespace NoiseTest;

void NoiseTest::logPassed(string message)
{
    cout << PASSED_COLOR << message << RESET;
}

void NoiseTest::logFailed(string message)
{
    cout << ERROR_COLOR << message << RESET;
}

void NoiseTest::logIgnored(string message)
{
    cout << IGNORED_COLOR << message << RESET;
}

void NoiseTest::logTestResults(bool ignored, bool passed, string message)
{
    if (ignored)
    {
        logIgnored(message);
        return;
    }

    if (passed)
    {
        logPassed(message);
    }
    else
    {
        logFailed(message);
    }
}
