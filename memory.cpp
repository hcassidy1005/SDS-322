#include <iostream>
using std::cout;
using std::endl;


int main(){
	int i = 0;
	int* addr = &i;
	
	cout << "value of i: " << i << endl;
	cout << "memory address of i: " << &i << endl;
	cout << "pointer to i: " << addr << endl;
	cout << "what is at address: " << *addr << endl;
	cout << "size of i: " << sizeof(int) << endl;

}//main 


 
