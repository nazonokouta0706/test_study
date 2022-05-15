#include "pch.h"
#include "CppUnitTest.h"
#include "../include/StaticLib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(false, is_leap_year(1));
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(true, is_leap_year(2024));
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(false, is_leap_year(2100));
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(true, is_leap_year(2000));
		}
	};
}
