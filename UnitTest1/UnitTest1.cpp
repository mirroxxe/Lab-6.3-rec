#include "pch.h"
#include "CppUnitTest.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

template <typename T>
T recursiveSum(const std::vector<T>& arr, size_t index) {
    if (index == 0) {
        return arr[index];
    }
    else {
        return arr[index] + recursiveSum(arr, index - 1);
    }
}

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestRecursiveSum)
        {
            std::vector<int> input = { 1, 2, 3, 4, 5 };

            int expected = 15;

            int result = recursiveSum(input, input.size() - 1);

            Assert::AreEqual(expected, result);
        }
    };
}
