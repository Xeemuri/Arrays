#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int minRand = 20;
	int maxRand = 30;
	const int SIZE = 20;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		bool unique;

		do
		{
			arr[i] = rand() % SIZE;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
		
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}