#include <iostream> 

using std::cout;
using std::endl;
using std::cin;
using std::ios;

#include "circle.h"
#include "square.h"
#include "sphere.h"
#include "cube.h"

int main()
{
	Circle cir(3.5, 6, 9);
	Square sqr(12, 2, 2);
	Sphere sph(5, 1.5, 4.5);
	Cube cub(2.2);
	Shape *ptr[4] = { &cir, &sqr, &sph, &cub };

	for (int x = 0; x < 4; ++x) {
		ptr[x]->print();
		cout << endl;
	}

	system("PAUSE");
	return 0;
}

