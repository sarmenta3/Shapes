#include "sphere.h"
#include <iostream>
using std::cout;


Sphere::Sphere(double r, double x, double y)
	: ThreeDimensionalShape(x, y) {
	radius = r > 0 ? r : 0;
}

double Sphere::area() const
{
	return 4.0 * 3.14159 * radius * radius;
}

double Sphere::volume() const
{
	return 4.0 / 3.0 * 3.14159 * radius * radius * radius;
}

double Sphere::getRadius() const { return radius; }

void Sphere::print() const
{
	cout << "Sphere with radius " << getRadius() << "; center at ("
		<< xCenter << ", " << yCenter << ");\narea of "
		<< area() << "; volume of " << volume() << '\n';
}

