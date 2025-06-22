#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int COLS = 5;
	const int ROWS = 4;
	int arr[COLS][ROWS];

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			arr[i][j] = rand();
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			for (int k = j; k < ROWS; k++)
			{
				if (arr[i][j] < arr[i][k])
				{
					int buffer = arr[i][j];
					arr[i][j] = arr[i][k];
					arr[i][k] = buffer;
				}
			}
		}
	}
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "\t";

		}
		cout << endl;
	}
}