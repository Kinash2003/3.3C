#include "pch.h"
#include "CppUnitTest.h"
#include "../3.3C/Object.cpp"
#include "../3.3C/Object.h"
#include "../3.3C/LongLong.h"
#include "../3.3C/LongLong.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33С
{
	TEST_CLASS(UnitTest33С)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong A(4, 4), B(4, 4);
			Assert::AreEqual(A == B, true);


		}
	};
}
