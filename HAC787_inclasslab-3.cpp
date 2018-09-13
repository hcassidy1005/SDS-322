//Challenge Program 
//Hailey Cassidy 
//find if numbers are divisible by 5 and 2 

#include <iostream>
using std::endl;
using std::cout;
using std::cin; 

int main(){
	int input;
	cout <<  "Enter an integer" << endl;
	cin >> input;
	
	if (input % 2 == 0 && input % 5 == 0){
		cout << "All ";
	}// all
	else if (input % 2 != 0 && input % 5 !=0){
		cout << "No ";
	}// no
	if(input % 2 == 0||(input % 2 != 0 && input % 5 !=0)){
		cout << "Foo ";
	}// foo
	if(input % 5 == 0||(input % 2 != 0 && input % 5 !=0)){
		cout << "Bar";
	}// bar 
 	cout << endl;

}//int main 
