#include <iostream>
#define SIZE 11
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n;
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
	cout << "Введите число сдвигов для массива: "; cin >> n;

	for (int i = 0; i < SIZE; i++)
	{
		array[i] = (array[i] + n) % SIZE;
	}

	cout << "Массив со сдвигом влево на " << n << ": \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;

	int array1[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (int i = 0; i < SIZE; i++)
	{
		array1[i] -= n;
		while(array1[i] < 0)
		{
			array1[i] += SIZE;
		}
	}

	cout << "Массив со сдвигом вправо на " << n << ": \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << array1[i] << "\t";
	}
}