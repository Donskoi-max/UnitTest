#include "pch.h"
#include "CppUnitTest.h"
#include "number.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTestProject)
	{
	public:
		Number* number;

		TEST_METHOD_INITIALIZE(init)
		{
			number = new Number;
		}
		TEST_METHOD(TestMethod1)
		{
			double num1 = 3.9875;
			double num2 = 5.1543;
			Assert::AreEqual(number->Add(num1, num2), 3.9875+5.1543);
		}
		TEST_METHOD(TestMethod2)
		{
			double num1 = 10.5638;
			double num2 = -0.23698;
			Assert::AreEqual(number->Minus(num1, num2), 10.5638 + 0.23698);
		}
		TEST_METHOD(TestMethod3)
		{
			double num1 = 20.987;
			double num2 = -6.583;
			Assert::AreEqual(number->Multiply(num1, num2), -138.157421);
		}
		TEST_METHOD(TestMethod4)
		{
			double num1 = 40.9726;
			double num2 = 6.98;
			Assert::AreEqual(number->Divide(num1, num2), 40.9726/6.98);
		}
		TEST_METHOD_CLEANUP(clean)
		{
			delete number;
		}
	};
}
