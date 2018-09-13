#include <iostream>
using std::cout;
using std::endl; 

int main(){

	int i = 1;
	int j = 2;
	int k; 
	int sum = j;
	
	while (j < 4000000) {
		k = i+j;
		if (k % 2 == 0) {
			sum += k;
		}
		i = j;
		j = k; 		
		 
	}

	cout << "sum: " << sum <<endl; 
}
