#ifndef SPHERE_H
#define SPHERE_H


#include "threedim.h"

class Sphere : public ThreeDimensionalShape {
public:
	Sphere(double = 0, double = 0, double = 0);
	double area() const;
	double volume() const;
	double getRadius() const;
	void print() const;
private:
	double radius;
};

#endif

