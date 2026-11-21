#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3_6/B1.h"
#include "../lab3_6/B2.h"
#include "../lab3_6/D1.h"
#include "../lab3_6/D2.h"
#include "../lab3_6/D3.h"
#include "../lab3_6/D4.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(sizeof(int), sizeof(B1));
			Assert::AreEqual(sizeof(int), sizeof(B2));
			Assert::AreEqual(3 * sizeof(int), sizeof(D1));
			Assert::AreEqual(2 * sizeof(int), sizeof(D2));
			Assert::AreEqual(4 * sizeof(int), sizeof(D3));
			Assert::AreEqual(3 * sizeof(int), sizeof(D4));
		}
	};
}
