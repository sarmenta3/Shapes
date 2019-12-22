#include "cube.h"

#include <iostream>
using std::cout;

Cube::Cube(double s, double x, double y)
	: ThreeDimensionalShape(x, y)
{
	sideLength = s > 0 ? s : 0;
}

double Cube::area() const { return 6 * sideLength * sideLength; }

double Cube::volume() const
{
	return sideLength * sideLength * sideLength;
}

double Cube::getSideLength() const { return sideLength; }

void Cube::print() const
{
	cout << "Cube with side length " << sideLength << "; center at ("
		<< xCenter << ", " << yCenter << ");\narea of "
		<< area() << "; volume of " << volume() << '\n';
}
