//In Class Lab 3
//Find angles and hypothenuse for right triangle
//Hailey Cassidy 

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

float hypotenuse(float a, float b);
float thetaA(float a, float b);
float thetaB(float a, float b); 

int main(){
	float a; 
	float b;

	cout << "Enter in a value for a: " << endl;
	cin >> a;
	cout << "Enter in a value for b: " << endl;
	cin >> b;
	cout << endl; 

	cout << "The hypotenuse length is: " << hypotenuse(a,b) << endl;
	cout << "The angle theta A is: " << thetaA(a,b) << " degrees" << endl;
	cout << "The angle theta B is: " << thetaB(a,b) << " degrees" << endl;
}//main

float hypotenuse(float a, float b){
	return sqrt(pow(a,2) + pow(b,2));
}//hypotenuse 

float thetaA(float a, float b){
	return atan(a/b) * 180/ 3.141592;
}//thetaA

float thetaB(float a, float b){
	return atan(b/a) * 180/ 3.141592;
}//thetaB 

