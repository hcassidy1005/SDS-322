//Hailey Cassidy
//In class Lab 8 - Vector challenge
//March 29th 

#include <iostream>
#include <vector> 
#include <random>
using std::cout;
using std::vector;
using std::endl;

vector<float> random_vector(int length)
{	
	vector<float> randVector(length);
	for (int i = 0; i < length; i++)
	{
		randVector[i] = 1.*rand()/RAND_MAX; 
	}
	return randVector; 
}


int main()
{
	int length = 10;
	vector<float> values = random_vector(length);
	for (auto i: values)
	{
		cout << i  << endl;
	}
}

