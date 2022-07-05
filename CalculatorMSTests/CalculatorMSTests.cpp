#include "pch.h"
#include "CppUnitTest.h"
#include "main.cpp"
#include <limits>


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorMSTests
{
	TEST_CLASS(CalculatorMSTests) {
		public:

			TEST_METHOD(SumTest)
			{

				// Arrange
				std::vector <double> inputStream = { 1,2,3,4,5,6,7,8,9,10 };
				double expected = 55;
				double actual = 0;
				Addition addition = Addition();


				// Act
				addition.inputFunction(inputStream);

				// Assert
				actual = addition.getResult();
				Assert::AreEqual(expected, actual);
			}

			TEST_METHOD(ExtremeTest)
			{

				// Arrange
				std::vector <double> inputStream = { 1.7976931348623157E+308,2000000000,30000000,40000000,50000000,60000000,70000000,80000000,90000000,1.7976931348623157E+308 };
				const double expected = std::numeric_limits<double>::infinity();
				double actual = 0;
				Addition addition = Addition();
				
				
				// Act
				addition.inputFunction(inputStream);

				// Assert
				actual = addition.getResult();
				Assert::AreEqual(expected, actual);
			}

			TEST_METHOD(NegativeSumTest)
			{

				// Arrange
				std::vector <double> inputStream = {-3,-6,-9};
				const double expected = -18;
				double actual = 0;
				Addition addition = Addition();


				// Act
				addition.inputFunction(inputStream);

				// Assert
				actual = addition.getResult();
				Assert::AreEqual(expected, actual);
			}
	};
}
