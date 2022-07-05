#include "operationFunction.h"

#include <string>
#include <vector>

// accessors, to access input variable
void Operations::inputFunction(std::vector<double> inputList) {
	inputValues = inputList;
}

// method to return product after operations
double Operations::getResult() {
	applyOperation();
	return sum;
}

