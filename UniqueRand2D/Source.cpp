#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int ROWS = 3;
	const int COLS = 3;
	const int MAX = 10;
	int arr[ROWS][COLS] = {};
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;

			do
			{
				arr[i][j] = rand() % MAX;
				unique = true;
				for (int k = 0; k <= i; k++)
				{
					int limit = (k == i) ? j : COLS;
					for (int l = 0; l < limit; l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
				}
				} while (!unique);

			}
		}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}