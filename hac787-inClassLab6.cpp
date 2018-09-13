//Hailey Cassidy
//March 6th 
//fibonacci sequence 
#include <iostream>
using std::cout;
using std::endl;

int fibonacci (int i){
	int num;
	if (i == 1)
		return 1;
	else if (i == 0)
		return 1;
	else 
		return fibonacci (i - 1) + fibonacci(i - 2);
}//fibonacci 

int main (){
	cout << fibonacci (25) <<endl;
}
