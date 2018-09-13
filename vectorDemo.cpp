#include <iostream>
using std::cout;
using std::endl;

int main()
{
	vector<int> myVector[] = {4, 7, 3, 2, 1};
	vector<int> myVector2(4, 5)

	for (auto i: myVector)
	{
		cout << i << endl;	
	}

	for (auto i: myVector2)
	{
		cout << i << endl;
	}

	int x = myVector2[0];
	int y = myVector2.at(0);
} 
