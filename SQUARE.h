#ifndef SQUARE_H
#define SQUARE_H

#include "twodim.h"

class Square : public TwoDimensionalShape {
public:
	Square(double = 0, double = 0, double = 0);
	double getSideLength() const;
	double area() const;
	void print() const;
private:
	double sideLength;
};
#endif
