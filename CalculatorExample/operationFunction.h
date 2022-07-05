#ifndef OPERATIONFUNCTION_H
#define OPERATIONFUNCTION_H

#include <string>
#include <vector>

// Operations class
class Operations {
public:
	// accessors, to access input variable
	void inputFunction(std::vector <double> inputList);

	// method to return product after operations
	double getResult();

protected:
	// virtual method to be implement in its classes
	virtual void applyOperation() = 0;

	// class fields
	double sum = 0;
	std::vector <double> inputValues = {};
};

#endif // OPERATIONFUNCTION_H

