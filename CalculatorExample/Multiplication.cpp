#include "Multiplication.h"

#include <string>
#include <iostream>
#include <numeric>

void Multiplication::applyOperation()
{
	// C++17, requires language change from C++ 14 in project properties
	sum = std::reduce(std::cbegin(inputValues), std::cend(inputValues), 1, std::multiplies<int>());
}