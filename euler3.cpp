#include <iostream>
using std::cout;
using std::endl; 

int main(){
	int num = 600851475143;
	int fact; 
	int primeFact; 
	bool prime = true; 
	for (int i = num; i > 0; i--){
		if (num% i == 0){
			//its a factor
			fact = i;
			cout << "factor: " << fact << endl; 
			prime = true; 
			for (int x = 2; x <= fact/2; x++){
				if (fact% x == 0){
					prime = false; 
				}
			}
			cout << "is it prime? " << prime << endl;
			if (prime == true) {
				primeFact = fact;
				break;
			}
 

		}
	}
	
	cout << "Largest Prime Factor: " << primeFact <<endl; 
}
