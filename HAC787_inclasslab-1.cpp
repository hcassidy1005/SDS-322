//Challenge program in the wrong order 
//hailey cassidy 

#include <iostream>
using std::endl;
using std::cout;
using std::cin; 

int main(){
	int inputNum;
	cout << "enter an interger" << endl;
	cin >> inputNum;
	
	if( inputNum % 2 == 0){
		cout << "Foo"<< endl;
	}//if 2
	if (inputNum % 5 == 0){
		cout << "Bar" << endl;
	}//if 5
	if (inputNum % 5 != 0 && inputNum % 2 != 0){
		cout << " No Foo Bar " << endl;
	}//if not 2 or 5 
	if (inputNum % 5 == 0 && inputNum % 2 == 0){
		cout << "All Foo Bar" << endl;
	}//if 2 and 5 
}//main 
