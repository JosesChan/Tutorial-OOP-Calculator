#include "Multiplication.h"

#include <string>
#include <iostream>

void Multiplication::applyOperation()
{
	sum = inputValues[0];
	for (int i = 1; i < inputValues.size(); i++) {
		sum = sum*inputValues[i];
	}
}
