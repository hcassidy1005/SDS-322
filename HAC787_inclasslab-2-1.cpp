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
		cout << "All Foo Bar" << endl;
	}//if 2  and 5
	else if(input % 2 == 0){
		cout << "Foo" << endl;
	}//else if 2 only
	else if(input % 5 == 0){
		cout << "Bar" << endl;
	}//else if 5 only 
	else{ 
		cout << "No Foo Bar" << endl;
	}//else not 2 or 5 

}//int main 
