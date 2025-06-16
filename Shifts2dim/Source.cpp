#include <iostream>
//#define SHIFT_LEFT
#define SHIFT_RIGHT
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int COLS = 3;
	const int ROWS = 10;
	int arr[COLS][ROWS] = {
		{0,1,2,3,4,5,6,7,8,9},
		{10,11,12,13,14,15,16,17,18,19},
		{20,21,22,23,24,25,26,27,28,29}
	};
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

	int number_of_shifts;

	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
#ifdef SHIFT_LEFT
	for (int k = 0; k < number_of_shifts; k++)
	{
		for (int i = 0; i < COLS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 1; j < ROWS; j++)
			{
				arr[i][j - 1] = arr[i][j];
			}
			arr[i][ROWS - 1] = buffer;
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
#endif // SHIFT_LEFT
#ifdef SHIFT_RIGHT

	for (int k = 0; k < number_of_shifts; k++)
	{
		for (int i = 0; i < COLS; i++)
		{
			int buffer = arr[i][ROWS - 1];
			for (int j = ROWS-1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = buffer;
		}
	}
	cout << "Сдвиг вправо: " << endl;
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
#endif // SHIFT_RIGHT

}