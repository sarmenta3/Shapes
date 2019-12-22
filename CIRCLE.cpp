#include "circle.h"

#include <iostream>
using std::cout;

Circle::Circle(double r, double x, double y)
	: TwoDimensionalShape(x, y) {
	radius = r > 0 ? r : 0;
}

double Circle::getRadius() const { return radius; }

double Circle::area() const { return 3.14159 * radius * radius; }

void Circle::print() const
{
	cout << "Circle with radius " << getRadius() << "; center at ("
		<< xCenter << ", " << yCenter << ");\narea of " << area() << '\n';
}
