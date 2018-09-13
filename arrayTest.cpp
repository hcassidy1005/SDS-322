//Array text program 
//Hailey Cassidy 
//2-8-2018

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main () {
	int array_5_elements [5] = { 10, 11, 12, 13, 14 };
	cout << "Full array: " << array_5_elements [:] << ", ";
	cout << endl;
	cout << "First Element = " << array_5_elements [0] << endl;
	cout << "Second Element = " << array_5_elements [1] << endl;
	cout << "Third Element = " << array_5_elements [2] << endl;
	cout << "Fourth Element = " << array_5_elements [3] << endl;
	cout << "Fifth Element = " << array_5_elements [4] << endl;
	cout << endl;

	char array_alphabets [26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	cout << "Full array: " << array_alphabets [:] <<", ";
	cout << endl;
	cout << "First Element = " << array_alphabets [0] << endl;
	cout << "Second Element = " << array_alphabets [1] << endl;
	cout << "Third Element = " << array_alphabets [2] << endl;
	cout << "Fourth Element = " << array_alphabets [3] << endl;
	cout << "Fifth Element = " << array_alphabets [4] << endl;
	cout << "26th Element = " << array_alphabets [25] << endl;
	cout << endl;

	int number_element;
	cout << "What element number would you like to display?" << endl;
	cin >> number_element;
	cout << "Element "<< number_element << " of array_alphabet is " << array_alphabets [number_element] << endl;


}
