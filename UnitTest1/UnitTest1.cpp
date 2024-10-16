#include "pch.h"
#include "CppUnitTest.h"
#include "../lab7.1/FileName.cpp"  
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MatrixUnitTest
{
    TEST_CLASS(MatrixUnitTest)
    {
    public:

        TEST_METHOD(TestCalc)
        {
            int rowCount = 3;
            int colCount = 3;

            int** a = new int* [rowCount];
            for (int i = 0; i < rowCount; i++) {
                a[i] = new int[colCount];
            }

            // Initialize matrix
            a[0][0] = 10; a[0][1] = 12; a[0][2] = 8;
            a[1][0] = 3; a[1][1] = 2; a[1][2] = 6;
            a[2][0] = 4; a[2][1] = 16; a[2][2] = 7;

            int S = 0;
            int k = 0;

            Calc(a, rowCount, colCount, S, k);

            
            Assert::AreEqual(48, S);  
            Assert::AreEqual(6, k);  

          
            for (int i = 0; i < rowCount; i++) {
                delete[] a[i];
            }
            delete[] a;
        }
    };
}
