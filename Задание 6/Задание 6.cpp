#include <iostream>
#include<ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int k;
	cout << "Введите число от 0 до 15: ";
	cin >> k;

	const int n = 5, m= 5;
	int a[n][m] = {};
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 15 + 1;
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";


	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i][j] < k)
			{
				a[i][j] = k;
			}
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}