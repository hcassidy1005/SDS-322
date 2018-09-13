//math test 

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;

int main() {

	
	cout << "2 + 2 = " << 2+2 << endl;
	cout << "2 - 2 = " << 2-2 << endl;
	cout << "2 * 2 = " << 2*2 << endl;
	cout << "2 / 2 = " << 2/2 << endl;
	cout << "2 % 2 = " << 2%2 << endl;
	cout << "1 + 2 = " << 1+2 << endl;
	cout << "1 - 2 = " << 1-2 << endl;
	cout << "1 * 2 = " << 1*2 << endl;
	cout << "1 / 2 = " << 1.0/2.0 << endl;
	cout << "1 % 2 = " << 1%2 << endl;

	cout << "3 to the power of 2 = " <<pow(3,2) <<endl;
	cout << "The square root of 9 = " << sqrt(9) <<endl;

	int pi_integer = atan(1)*4;
	float pi_float = atan(1)*4;
	double pi_double = atan(1)*4;
	
	cout << endl;
	cout << "Pi as an integer (size in bytes " << sizeof(int)<< ") " << pi_integer << endl;
	cout << "Pi as an float (size in bytes " << sizeof(float)<< ") " << setprecision(200) << pi_float <<endl;
	cout << "Pi as an double (size in bytes " << sizeof(double)<< ") " << setprecision(200) <<pi_double <<endl;
	cout << endl;
}
