#include <iostream>

using std::cout;
using std::endl;

int recurse_sum(int i) {
	if (i == 0){
		return 0;
	}// if zero 
	else {
		return i + recurse_sum(i-1);
	}// else 
}// recurse sum 

int main(){

	int sum = recurse_sum(100);
	cout << sum << endl;

}//main
