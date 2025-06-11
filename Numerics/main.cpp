#include <iostream>
using namespace std;

//#define BINARY
#define HEXADECIMAL
void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите число в десятичной системе счисления: "; cin >> decimal;
#ifdef BINARY
	int n1 = decimal;
	const int SIZE = 32;
	int bin[SIZE], hex[SIZE];
	int i = 0;

	/*while (decimal != 0)
	{
		remainder = decimal % 2;
		bin[counter++] = remainder;
		decimal /= 2;
	}*/
	for (; decimal; decimal /= 2) bin[i++] = decimal % 2;

	cout << "Число в двоичной системе: ";
	for (--i; i >= 0; i--) cout << bin[i];
	cout << endl;
#endif // BINARY

#ifdef HEXADECIMAL
	const int  MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};

	int i = 0;
	for (; decimal; decimal /= 16) {
		hex[i++] = decimal % 16 < 10 ? decimal % 16 + 48 : decimal % 16 + 55;
		/*hex[i] = decimal % 16;
		hex[i++] += hex[i] < 10 ? hex[i] + 48 : hex[i] + 55;*/
	}
	for (--i; i > 0; i--)cout << hex[i];
	cout << endl;
#endif // HEXADECIMAL


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
	/*while (n1 != 0) { remainder = n1 % 16; hex[i++] = (remainder < 10) ? remainder + '0' : 'A' + remainder - 10; decimal /= 16; }*/
	//Я знаю, что несовсем правильно, но по другому не получилось
	/*cout << "Число в шестнадцатеричной системе: "; for (int i = (i - 1); i >= 0; i--) cout << (char)hex[i];*/
	cout << endl;
}