#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	const int SIZE = 10;
	int arr[SIZE];

	/*arr[2] = 1024;
	cout << arr[2] << endl;*/

	//Ввод элементов массива с клавиатуры
	//cout << "Введите элементы массива: ";
	int minRand, maxRand;
	cout << "Введите минимальное случайное число: "; cin >> minRand;
	cout << "Введите максимальное случайное число: "; cin >> maxRand;

	for (int i = 0; i < SIZE; i++)
	{
		/*cin >> arr[i];*/
		arr[i] = rand() % (maxRand - minRand) + minRand;

	}

	//Вывод массива на экран
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	
	//Вывод массива на экран в обратном порядке
	for (int i = (SIZE - 1); i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива: " << sum << endl;

	//Среднее - арифметическое элементов массива :
	cout << "Среднее-арифметическое элементов массива:" << double(sum) / SIZE << endl;

	//Найти минимальное значение в массиве:
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	cout << "минимальное значение в массиве: " << min << endl;

	//Найти максималное значение в массиве:
	int max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	cout << "Максимальное значение в массиве: " << max << endl;

	//Сортировка массива:
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			int imin = i;
			if (arr[j] < arr[imin])
			{
				imin = j;
			}
			int holder = arr[i];
			arr[i] = arr[imin];
			arr[imin] = holder;

		}
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i]<< "\t";
	}
}