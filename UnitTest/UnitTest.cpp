#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6_1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = Sum(2, 3);
			Assert::AreEqual(t, 5);
		}
	};
}
