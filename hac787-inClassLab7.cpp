//Hailey Cassidy 
//March 20th 
//Struct Right Triangle Challenge problem

#include <iostream>
#include <math.h>

using std::cout;
using std::endl;
using std::cin; 

struct triangle {float s1; float s2; float s3; float a1; float a2; float a3 = 90;};

int main(){
	triangle t1, t2;
	t1.s1 = 3;
	t1.s2 = 4;
	t2.s1 = 5;
	t2.s2 = 12;
	
	t1.s3 = sqrt(pow(t1.s1, 2) + pow(t1.s2, 2));
	t2.s3 = sqrt(pow(t2.s1, 2) + pow(t2.s2, 2));
	t1.a1 = tan(t1.s1/t1.s2)* 180/ 3.141592;
	t2.a1 = tan(t2.s1/t2.s2)* 180/ 3.141592;
	t1.a2 = 90 - t1.a1;
	t2.a2 = 90 - t2.a1;

	cout << "Triangle 1: " <<endl;
	cout << "   side 1: " << t1.s1 << endl;
	cout << "   side 2: " << t1.s2 << endl;
	cout << "   hypotanuse: " << t1.s3 << endl;
	cout << "   right angle: " << t1.a3 << endl;
	cout << "   theta 1: " << t1.a1 << endl;
	cout << "   theta 2: " << t1.a2 << endl;

	cout << "Triangle 2: " <<endl;
        cout << "   side 1: " << t2.s1 << endl;
        cout << "   side 2: " << t2.s2 << endl;
        cout << "   hypotanuse: " << t2.s3 << endl;
        cout << "   right angle: " << t2.a3 << endl;
        cout << "   theta 1: " << t2.a1 << endl;
        cout << "   theta 2: " << t2.a2 << endl;
}
