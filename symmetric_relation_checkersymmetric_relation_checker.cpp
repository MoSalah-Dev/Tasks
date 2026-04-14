#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number : ";
	cin >> n;
	if (n <= 0)
	{
		cout << "ERROR : Please enter a correct number \n";
		return 0;
	}

	int x[100], y[100];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << " pairs : ";
		cin >> x[i] >> y[i];
	}


	bool symetric = true;

	for (int i = 0; i < n; i++)
	{
		bool found = false;
		for (int j = 0; j < n; j++)
		{
			if (x[j] == y[i] && y[j] == x[i])
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
	if (symetric)
	{
		cout << "relation is symetric \n";
	}
	else
		cout << "Relation not symetric \n";


	return 0;

}


