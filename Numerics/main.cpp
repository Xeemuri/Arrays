#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число в десятичной системе счисления: "; cin >> n;
	int n1 = n;
	const int SIZE = 32;
	int bin[SIZE], hex[SIZE];
	int counter = 0;
	int remainder = 0;

	while (n != 0)
	{
		remainder = n % 2;
		bin[counter++] = remainder;
		n /= 2;
	}

	cout << "Число в двоичной системе: ";
	for (int i = (counter - 1); i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;

	counter = 0;
	remainder = 0;

	/*while (n1 != 0)
	{
		remainder = n1 % 16;
		switch (remainder)
		{
		case 10: hex[counter++] = 'A'; break;
		case 11: hex[counter++] = 'B'; break;
		case 12: hex[counter++] = 'C'; break;
		case 13: hex[counter++] = 'D'; break;
		case 14: hex[counter++] = 'E'; break;
		case 15: hex[counter++] = 'F'; break;
		default: hex[counter++] = remainder + '0'; break;
		}
		n1 /= 16;

	}*/
	while (n1 != 0) {remainder = n1 % 16; hex[counter++] = (remainder < 10) ? remainder + '0' : 'A' + remainder - 10; n /= 16;}
	//Я знаю, что несовсем правильно, но по другому не получилось
	cout << "Число в шестнадцатеричной системе: "; for (int i = (counter - 1); i >= 0; i--) cout << (char)hex[i];
	cout << endl;
}