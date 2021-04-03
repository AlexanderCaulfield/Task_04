#include <iostream>

using namespace std;

void rush (int x, int y)
{
	cout << "A";
	for (int i = 1; i < (x - 1); i++)
	{
		cout << "B";
	}
	if (x != 1)
	{
		cout << "C";
	}
	if (y != 1)
	{
		for (int j = 0; j < y - 2; j++)
		{
			cout << endl;
			for (int i = 0; i < x; i++)
			{
				if ((i == 0 || (i + 1) == x))
				{
					cout << "B";
				}
				else
				{
					cout << " ";
				}
			}
		}
	}
	cout << endl;
	if (y > 1)
	{
		cout << "A";
		for (int i = 1; i < (x - 1); i++)
		{
			cout << "B";
		}
		if (y != 1 && x != 1)
		{
			cout << "C";
		}
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	int x, y;
	cout << "¬ведите значени€ переменных x и y: ";
	cin >> x >> y;
	cout << endl;;
	rush(x, y);
	cout << endl;
	system("pause");
	return 0;
}