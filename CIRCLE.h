#ifndef CIRCLE_H
#define CIRCLE_H

#include "twodim.h"

class Circle : public TwoDimensionalShape {
public:
	Circle(double = 0, double = 0, double = 0);
	double getRadius() const;
	double area() const;
	void print() const;
private:
	double radius;
};

#endif


