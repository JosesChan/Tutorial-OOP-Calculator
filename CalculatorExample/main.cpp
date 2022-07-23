#include "Addition.h"
#include "Multiplication.h"
#include <iostream>
#include <vector>
#include <cstring>

int main() {

	std::vector <double> inputStream = { 1,2,3 };
	
	//Create a multiplication object
	Multiplication multiplication = Multiplication();

	// Insert {1,2,3} aka inputStream variable
	// into function made in multiplication
	multiplication.inputFunction(inputStream);
	std::cout << multiplication.getResult();

	// Create an addition object
	Addition addition = Addition();

	// Insert {1,2,3} aka inputStream variable
	// into function made in addition
	addition.inputFunction(inputStream);
	std::cout << addition.getResult();
}


