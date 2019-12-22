#ifndef TWODIM_H
#define TWODIM_H

#include "shape.h"
#include <iostream>

class TwoDimensionalShape : public Shape {
public:
	TwoDimensionalShape(double x, double y) : Shape(x, y) { }
	double area() const;
};

#endif

