#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Enter the number of pairs : ";
	cin >> n;

	if (n <= 0)
	{
		cout << "ERROR : You Entered A Wrong Number ";
		return 0;
	}

	int x[100], y[100];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << " Pairs : ";
		cin >> x[i] >> y[i];
	}

	bool transitive = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (y[i] == x[j])
			{
				bool found = false;

				for (int k = 0; k < n; k++)
				{
					if (x[k] == x[i] && y[k] == y[j])
					{
						found = true;
						break;
					}
				}

				if (found == false)
				{
					transitive = false;	
				}
			}
		}
	}

	if (transitive)
	
		cout << "The relation is transitive \n";
	
	else
		cout << "the relation not transitive \n";


	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "Enter the number of pairs : ";
	cin >> n;

	if (n <= 0)
	{
		cout << "ERROR : You Entered A Wrong Number ";
		return 0;
	}

	int x[100], y[100];
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the " << i + 1 << " Pairs : ";
		cin >> x[i] >> y[i];
	}

	bool transitive = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (y[i] == x[j])
			{
				bool found = false;

				for (int k = 0; k < n; k++)
				{
					if (x[k] == x[i] && y[k] == y[j])
					{
						found = true;
						break;
					}
				}

				if (found == false)
				{
					transitive = false;	
				}
			}
		}
	}

	if (transitive)
	
		cout << "The relation is transitive \n";
	
	else
		cout << "the relation not transitive \n";


	return 0;
}
