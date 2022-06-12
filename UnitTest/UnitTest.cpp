#include "pch.h"
#include "CppUnitTest.h"
#include "../vector/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        //add
        TEST_METHOD(TestAdd)
        {
            vectorClass expected = vectorClass(-1, 3, 4);
            vectorClass actual = vectorClass(4, 2, 1) + vectorClass(-5, 1, 3);
            Assert::AreEqual(expected.getX(), actual.getX());
            Assert::AreEqual(expected.getY(), actual.getY());
            Assert::AreEqual(expected.getZ(), actual.getZ());
        }
        //substract
        TEST_METHOD(TestSubstract)
        {
            vectorClass expected = vectorClass(-1, 3, 4);
            vectorClass actual = vectorClass(10, -2, 4) - vectorClass(11, -5, 0);
            Assert::AreEqual(expected.getX(), actual.getX());
            Assert::AreEqual(expected.getY(), actual.getY());
            Assert::AreEqual(expected.getZ(), actual.getZ());
        }
        //dot prod
        TEST_METHOD(TestDotProduct)
        {
            int expected = 25;
            int actual = vectorClass(3, 4, 0) * vectorClass(3, 4, 0);
            Assert::AreEqual(expected, actual);
        }
        //cross product
        TEST_METHOD(TestCrossProduct)
        {
            vectorClass expected = vectorClass(23, 11, -9);
            vectorClass actual = vectorClass(1, 2, 5) | vectorClass(3, -3, 4);
            Assert::AreEqual(expected.getX(), actual.getX());
            Assert::AreEqual(expected.getY(), actual.getY());
            Assert::AreEqual(expected.getZ(), actual.getZ());
        }

    };
}