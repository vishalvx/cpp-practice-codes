/*
Challenge : August Long Challenge
Problem 2: Problem Difficulties

functional time complexity constant  
*/

#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int arr[4];
		int check[11] = {0};
		for (int i = 0; i < 4; i++)
		{
			cin >> arr[i];
			check[arr[i]]++;
		}
		int maxequal = 0;
		for (int i = 1; i < 11; i++)
		{
			if (check[i] > maxequal)
			{
				maxequal = check[i];
			}
		}
		if (maxequal == 4)
			cout << "0" << endl;
		else if (maxequal == 3)
			cout << "1" << endl;
		else if (maxequal == 2)
			cout << "2" << endl;
		else
			cout << "2" << endl;
	}
	return 0;
}
