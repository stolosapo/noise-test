#include "Assertion.h"
#include "AssertException.h"
#include "UnitTest.h"

#include <stdio.h>

using namespace NoiseTest;

void NoiseTest::assertTrue(bool value)
{
    if (value)
    {
        return;
    }

    string strValue = value ? "true" : "false";

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%s' to be true", strValue.c_str());

    throw AssertException(mess);
}

void NoiseTest::assertFalse(bool value)
{
    if (!value)
    {
        return;
    }

    string strValue = value ? "true" : "false";

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%s' to be false", strValue.c_str());

    throw AssertException(mess);
}


void NoiseTest::assertEqual(string val1, string val2)
{
    if (val1 == val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%s' to be equal with '%s'", val1.c_str(), val2.c_str());

    throw AssertException(mess);
}

void NoiseTest::assertEqual(int val1, int val2)
{
    if (val1 == val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%d' to be equal with '%d'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertEqual(long val1, long val2)
{
    if (val1 == val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%ld' to be equal with '%ld'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertEqual(long long val1, long long val2)
{
    if (val1 == val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%lld' to be equal with '%lld'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertEqual(double val1, double val2)
{
    if (val1 == val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%lf' to be equal with '%lf'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertEqual(bool val1, bool val2)
{
    if (val1 == val2)
    {
        return;
    }

    string strVal1 = val1 ? "true" : "false";
    string strVal2 = val2 ? "true" : "false";

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%s' to be equal with '%s'", strVal1.c_str(), strVal2.c_str());

    throw AssertException(mess);
}


void NoiseTest::assertNotEqual(string val1, string val2)
{
    if (val1 != val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%s' to be equal with '%s'", val1.c_str(), val2.c_str());

    throw AssertException(mess);
}

void NoiseTest::assertNotEqual(int val1, int val2)
{
    if (val1 != val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%d' to be equal with '%d'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertNotEqual(long val1, long val2)
{
    if (val1 != val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%ld' to be equal with '%ld'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertNotEqual(long long val1, long long val2)
{
    if (val1 != val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%lld' to be equal with '%lld'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertNotEqual(double val1, double val2)
{
    if (val1 != val2)
    {
        return;
    }

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%lf' to be equal with '%lf'", val1, val2);

    throw AssertException(mess);
}

void NoiseTest::assertNotEqual(bool val1, bool val2)
{
    if (val1 != val2)
    {
        return;
    }

    string strVal1 = val1 ? "true" : "false";
    string strVal2 = val2 ? "true" : "false";

    char* mess = new char[1024];

    sprintf(mess, "Exprected '%s' to be equal with '%s'", strVal1.c_str(), strVal2.c_str());

    throw AssertException(mess);
}

bool NoiseTest::assertMethod(string description, UnitTestFunction testFunction)
{
    UnitTest* test = new UnitTest(description, testFunction);

    test->test();

    return test->report();
}
