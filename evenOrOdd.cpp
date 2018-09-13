//Hailey Cassidy
//Even or Odd

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main(){

	int number;
	cout << "Enter a number" << endl; 
	cin  >>  number;

	if (number%2 == 0) {
		cout << "The number is even" << endl;
	}
	else {
		cout << "The number is odd" << endl;
	}
}

