#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int minRand = 20;
	int maxRand = 30;
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = (SIZE - 1); i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}