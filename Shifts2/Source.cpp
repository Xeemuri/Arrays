#include <Windows.h>
#include <iostream>
//#define SHIFT_LEFT
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shifts;
	
	cout << "������� ���������� �������: "; cin >> number_of_shifts;
#ifdef SHIFT_LEFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		Sleep(500);
		system("CLS");
		//////////////////////////////////////////////
		//����� ������� �� ���� ������� �����:�
		//1) ��������� ������� ������� �������
		int buffer = arr[0];
		//2)�������� ������:
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		//3) ���������� ������� ������� � ����� �������:
		arr[n - 1] = buffer;
		///////////////////////////////////////////////
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
#endif // SHIFT_LEFT

}