//In class lab 2
//heads or tails 1000 times
// 2/22/18

#include <iostream>
#include <time.h>
using std::endl;
using std::cout;

int main(){
	int numHead = 0;
	int numTail = 0;
	srand (time(NULL)) ;
	for (int i = 0; i <= 1000000; i++){
		int rand();
		int random_number = rand();

		if (random_number%2 == 0) {
			numHead++;
		}//if num even	
		else {
			numTail++;
		}//if num odd 
	}//for loop 
	cout << "Number of Heads: " << numHead << endl;
	cout << "Number of Tails: " << numTail << endl;
}//int main 
