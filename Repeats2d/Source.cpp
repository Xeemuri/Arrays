#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int COLS = 4;
	const int ROWS = 5;
	const int maxRand = 15;
	int count[ROWS][COLS] = { 0 };
	int arr[ROWS][COLS];
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % maxRand;
			cout << arr[i][j] << "\t";

		}
		cout << endl;
		cout << endl;
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0;l <= j; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count[i][j] += 1;
					}
				}
			}
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "Число " << arr[i][j] << " повторяется " << count[i][j] << " раз(а)\n";
		}
	}

}