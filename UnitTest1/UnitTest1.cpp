#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;



namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		const double epsilon = 0.1;

		TEST_METHOD(TestMethodS0)
		{
			// Перевірка функції S0
			Assert::AreEqual(S0(1, 5), 13.2731, epsilon);
			Assert::AreEqual(S0(2, 6), 12.5842, epsilon);
		}

		TEST_METHOD(TestMethodS1)
		{
			// Перевірка функції S1
			Assert::AreEqual(S1(1, 5, 1), 13.2731, epsilon);
			Assert::AreEqual(S1(2, 6, 2), 12.5842, epsilon);
		}

		TEST_METHOD(TestMethodS2)
		{
			// Перевірка функції S2
			Assert::AreEqual(S2(1, 5, 5), 13.2731, epsilon);
			Assert::AreEqual(S2(2, 6, 6), 12.5842, epsilon);
		}

		TEST_METHOD(TestMethodS3)
		{
			// Перевірка функції S3
			Assert::AreEqual(S3(1, 5, 1, 0), 13.2731, epsilon);
			Assert::AreEqual(S3(2, 6, 2, 0), 12.5842, epsilon);
		}

		TEST_METHOD(TestMethodS4)
		{
			// Перевірка функції S4
			Assert::AreEqual(S4(1, 5, 5, 0), 13.2731, epsilon);
			Assert::AreEqual(S4(2, 6, 6, 0), 12.5842, epsilon);
		}
		
	};
}
