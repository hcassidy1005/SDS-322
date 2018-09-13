// Hailey Cassidy
// Homework 2
// preform y=mx+b function 
// 2/1/2018

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	float x;
	float y;
	float m;
	float b; 
	
	cout << "Solving the equation y = mx + b" << endl;

	cout << "Enter a value for x: ";
	cin >> x; 
	cout << "Enter a value for m: ";
	cin >> m;
	cout << "Enter a value for b: ";
	cin >> b;
	
	y = (m * x) + b;

	cout << "The value for y is " << y << endl;
}
