#include <iostream>
#include "Point2D.h"
using namespace std;

int main() {
	Point2D point1;

	point1.x = 2;
	point1.y = -2;

	cout << "Point is in the " << point1.findQuarter() << " quarter" << endl;

	point1.symmetryChange();

	cout << "Point is in the " << point1.findQuarter() << " quarter";


	return 0;
}