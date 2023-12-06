#include "pch.h"
#include "CppUnitTest.h"
#include "../lab9.2.A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int N = 3;
			Student students[N] =
			{
				{"Student1", 1, PHYSICS, 5, 5, 0},
				{"Student2", 2, MATH, 5, 5, 0},
				{"Student3", 3, PHYSICS, 5, 5, 0},
			};
			double result = CalculatePercentGoodPhysicsMath(students, N);
			Assert::AreEqual(100.0, result);
		}
	};
}
