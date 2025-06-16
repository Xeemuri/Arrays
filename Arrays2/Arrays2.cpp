
#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "");
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j]<< " \t";
        }
        cout << endl;
        cout << endl;
    }
    cout << endl;

    //Сумма элементов двумерного массива
    int sum = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];
        }
    }
    cout <<"Сумма элементов массива: " << sum << endl;
    cout << "Среднее-арифметическое: " << (double)sum / ROWS / COLS << endl;
}
