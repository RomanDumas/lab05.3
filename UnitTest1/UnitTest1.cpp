#include "pch.h"
#include "CppUnitTest.h"
#include "../LR5.3/LR5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result;
			result = S(10);
			double expected = (result * (sqrt(10) + 1)) - (pow(result, 2) * ((sqrt(result) - 1))) + 1;
			Assert::AreEqual(expected, result, 0.0001);
		}
	};
}
