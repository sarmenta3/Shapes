#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
using std::ostream;

class Shape {

public:
	friend  ostream& operator<<(ostream &, const Shape&);
	Shape(double = 0, double = 0);
	double getCenterX() const;
	double getCenterY() const;
	virtual void print() const;

protected:
	double xCenter;
	double yCenter;
};

#endif

