#include "square.h"

#include <iostream>
using std::cout;

Square::Square(double s, double x, double y)
	: TwoDimensionalShape(x, y)
{
	sideLength = s > 0 ? s : 0;
}

double Square::getSideLength() const { return sideLength; }

double Square::area() const { return sideLength * sideLength; }

void Square::print() const
{
	cout << "Square with side length " << sideLength << "; center at ("
		<< xCenter << ", " << yCenter << ");\narea of " << area() << '\n';
}

