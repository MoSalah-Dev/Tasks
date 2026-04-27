#include <iostream>

using namespace std;


int main()
{
	int n;
	cout << "Enter the number of vertices (0 OR 1) : ";
	cin >> n;

	int m[100][100];
	cout << "Enter the element in matrix \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> m[i][j];
			if (m[i][j] > 1 || m[i][j] < 0)
			{
				cout << "ERROR : Sorry you must Enter (0,1) only \n";
				return 0;
			}
		}
	}

	bool self_loop = false;
	for (int i = 0; i < n; i++)
	{
		if (m[i][i] == 1)
		{
			self_loop = true;
			break;
		}
	}

	if (!self_loop)
		cout << "\nThis MAtrix is Simple Graph \n";
	else
		cout << "\nThis Matrix Not Simple Graph \n";

	for (int i = 0; i < n; i++)
	{
		int degree = 0;
		for (int j = 0; j < n; j++)
		{
			if (m[i][j] == 1)
			{
				degree++;
			}
			
		}
			cout << "Dgree in row" << i + 1 << " is : " << degree;
		if (degree == 0)
		{
			cout << " (is Isolated) ";
		}
		cout << endl;
	}


}
