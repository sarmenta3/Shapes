#include "shape.h"
#include <iostream>

Shape::Shape(double x, double y)
{
	xCenter = x;
	yCenter = y;
}

double Shape::getCenterX() const { return xCenter; }

double Shape::getCenterY() const { return yCenter; }

void Shape::print() const {}

ostream & operator<<(std::ostream &out, const Shape &s)
{
	s.print();
	return out;
}

