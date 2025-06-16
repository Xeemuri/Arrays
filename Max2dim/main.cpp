#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int COLS = 3;
	const int ROWS = 3;
	int arr[ROWS][COLS] = {
		{1,4,8},
		{2,9,10},
		{3,0,6}
	};

	int max = arr[0][0];
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
			else if (arr[i][j] < min) min = arr[i][j];
		}
		
	}
	cout <<"Максимальное значение: "<< max << endl;
	cout <<"Минимальное значение: "<< min << endl;
}