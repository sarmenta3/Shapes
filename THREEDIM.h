#ifndef THREEDIM_H
#define THREEDIM_H

#include "shape.h"

class ThreeDimensionalShape : public Shape {
public:
	ThreeDimensionalShape(double x, double y) : Shape(x, y) { }
	double area();
	double volume();
};

#endif

