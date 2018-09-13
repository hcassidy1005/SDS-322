//Hailey Cassidy 
//March 6th 

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int recurse_sum_sq(int i)
{
 	if (i == 1)
 		return 1;
 	else
 		return pow(i,2) + recurse_sum_sq(i-1);
}//recurse sum square 
int main()
{
 cout << "First 100 sum of squares: " << recurse_sum_sq(100)<< endl;
}//int main
