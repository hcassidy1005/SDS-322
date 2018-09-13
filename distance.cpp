#include <iostream>
#include <math.h>

using std::cout;
using std::endl;

struct coordinate {float x; float y;};

int main(){

	coordinate point1;
	point1.x = 3.0;
	point1.y = 4.0;
	coordinate point2;
	point2.x = 2.0;
	point2.y = 2.0;

	float distance = sqrt(pow(point1.x - point2.x, 2) + pow(point1.y- point2.y, 2));

	cout << distance << endl;
}
 
