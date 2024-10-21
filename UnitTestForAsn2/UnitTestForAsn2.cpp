#include "pch.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

void setWidth(int input, int* width) {
    if (input > 0 && input <= 100) {
        *width = input;
    }
}

void setLength(int input, int* length) {
    if (input >= 0 && input < 100) {
        *length = input;
    }
}
namespace UnitTest1
{
    TEST_CLASS(TestForAsn2)
    {
    public:

        TEST_METHOD(TestForPerimeter)
        {
            int length = 5;
            int width = 3;
            int actual_perimeter = length + length + width;
            int expected_perimeter = 16;
            Assert::AreEqual(expected_perimeter, actual_perimeter);

        };
        TEST_METHOD(TestForArea)
        {
            int length = 5;
            int width = 3;
            int actual_area = length * width;
            int expected_area = 15;
            Assert::AreEqual(expected_area, actual_area);
        };


        //Set length tests
        TEST_METHOD(Test1WithValidInput)
        {
            int length = 0;
            int input = 16;

            setLength(input, &length);

            int expected_length = 16;
            Assert::AreEqual(expected_length, length);
        }

        TEST_METHOD(Test2WithaNegativeInput)
        {
            int length = 10;
            int input = -1;

            setLength(input, &length);

            int expected_length = 10;
            Assert::AreEqual(expected_length, length);
        }


        TEST_METHOD(Test3WithExceededInputCondition)
        {
            int length = 10;
            int input = 101;

            setLength(input, &length);

            int expected_length = 10;
            Assert::AreEqual(expected_length, length);

        }

        //Set Width tests   
        TEST_METHOD(Test1WithValid)
        {
            int width = 0;
            int input = 15;

            setWidth(input, &width);

            int expected_width = 15;
            Assert::AreEqual(expected_width, width);
        }

        TEST_METHOD(Test2WithInputAsZero)
        {
            int width = 15;
            int input = 0;

            setWidth(input, &width);

            int expected_width = 15;
            Assert::AreEqual(expected_width, width);

        }

        TEST_METHOD(Test3WithInputNumHigherThanCondition)
        {
            int width = 15;
            int input = 101;

            setWidth(input, &width);

            int expected_width = 15;
            Assert::AreEqual(expected_width, width);
        }


    };
}



