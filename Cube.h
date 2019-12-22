#ifndef CUBE_H
#define CUBE_H

#include "threedim.h"

class Cube : public ThreeDimensionalShape {
public:
	Cube(double = 0, double = 0, double = 0);
	double area() const;
	double volume() const;
	double getSideLength() const;
	void print() const;
private:
	double sideLength;
};

#endif


