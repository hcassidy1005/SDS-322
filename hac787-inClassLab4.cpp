//In Class Lab 3
//Find angles and hypothenuse for right triangle
//Hailey Cassidy 

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

void rightTriMath(float a, float b, float &c, float &thetaA, float &thetaB); 

int main(){
	float a; 
	float b;
	float c;
	float thetaA;
	float thetaB;

	cout << "Enter in a value for a: " << endl;
	cin >> a;
	cout << "Enter in a value for b: " << endl;
	cin >> b;
	cout << endl; 
	
	rightTriMath(a, b, c, thetaA, thetaB);
	cout << "The hypotenuse length is: " << c << endl;
	cout << "The angle theta A is: " << thetaA << " degrees" << endl;
	cout << "The angle theta B is: " << thetaB << " degrees" << endl;
}//main

void rightTriMath(float a, float b, float &c, float &thetaA, float &thetaB){
	c = sqrt(pow(a,2) + pow(b,2));
	thetaA = atan(a/b) * 180/ 3.141592;
	thetaB = 90 - thetaA;
}// right triangle math 

