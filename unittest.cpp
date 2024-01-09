#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Admin\source\repos\IO_testy\IO_testy\funkcje.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

TEST_CLASS(FunkcjeTests)
{
public:

    TEST_METHOD(LogNatTest)
    {
        Assert::AreEqual(0, logNat(2));

    }

    TEST_METHOD(SredniaTest)
    {
        int dane[] = { 1, 2, 3, 4 };
        Assert::AreEqual(2, srednia(dane, 4));
    }

    TEST_METHOD(OdchylenieTest)
    {
        int dane[] = { 1, 2, 3, 4 };
        Assert::AreEqual(1, odchylenie(dane, 4));
    }

    TEST_METHOD(ExpoTest)
    {
        Assert::AreEqual(20, expo(3));
    }

    TEST_METHOD(BezwzglTest)
    {
        Assert::AreEqual(5, bezwzgl(-5));
        Assert::AreEqual(0, bezwzgl(0));
        Assert::AreEqual(5, bezwzgl(5));
    }

    TEST_METHOD(SumaTest)
    {
        int dane[] = { 1, 2, 3, 4 };
        Assert::AreEqual(10, suma(dane, 4));
    }
};
