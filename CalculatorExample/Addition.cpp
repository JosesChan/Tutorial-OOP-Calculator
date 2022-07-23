#include "Addition.h"

#include <string>
#include <iostream>

void Addition::applyOperation()
{
	for (int i = 0; i < inputValues.size(); i++) {
		sum += inputValues[i];
	}
}