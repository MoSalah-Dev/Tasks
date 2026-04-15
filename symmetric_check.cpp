#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter number of pairs : ";
	cin >> n;
	
	if (n <= 0)
	{
		cout << "ERROE : You Entered a wrong number \n";
		return 0;
	}
	
	int x[100], y[100];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << " Element : ";
		cin >> x[i] >> y[i];

	}

	bool symetric = true;
	for (int i = 0; i < n ;i++)
	{
		bool found = false;
		for (int j = 0; j < n; j++)
		{
			if (x[i] == y[j] && y[i] == x[j])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			symetric = false;
			break;
		}
	}
	if (symetric == true)
		cout << "The relation is symetric \n";
	else
		cout << "The relation not symetric \n";
	
	return 0;
}
