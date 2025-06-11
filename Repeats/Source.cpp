#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 10;
	int max = 10, min = 0;
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (max-min) - min;
	}
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";

	}
	cout << endl;

	int repeats[SIZE] = {};
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i] == arr[j])
			{
				repeats[i] += 1;

			}
		}
	}
	for (int i = 0; i < SIZE; i++)
	{

		if (repeats[i] > 1) cout << "Значение элемента " << i << " повторяется " << repeats[i] - 1 << " раз(a)\n";
		else cout << "Значение элемента " << i << " не повторяется\n";


	}
	/*for (int i = 0; i < SIZE; i++)
	{
		cout << repeats[i] << "\t";

	}*/
}