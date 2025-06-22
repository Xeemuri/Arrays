#include <iostream>
using namespace std;

#define tab "\t"
#define delimeter "\n-----------------------------------------------------------------------\n"
//#define ARRAYS_2D_BASICS
//#define MINMAX
//#define COLUMNS_SHIFT
//#define CROSS_CUTTING_SHIFT
//#define SORT
//#define UNIQUE_RAND
void main()
{
    setlocale(LC_ALL, "");
    const int ROWS = 3;
    const int COLS = 10;
    int arr[ROWS][COLS] =
    {
        {0,1,2,3,4,5,6,7,8,9},
        {10,11,12,13,14,15,16,17,18,19},
        {20,21,22,23,24,25,26,27,28,29},
    };
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
    cout << delimeter << endl;

#ifdef ARRAYS_2D_BASICS
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " \t";
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
    cout << "Сумма элементов массива: " << sum << endl;
    cout << "Среднее-арифметическое: " << (double)sum / ROWS / COLS << endl;

#endif // ARRAYS_2D_BASICS
    //Поиск минимального и максимального значения в массиве:
#ifdef MINMAX
    int min, max;
    min = max = arr[0][0];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] < min)min = arr[i][j];
            if (arr[i][j] > max)max = arr[i][j];
        }
    }
    cout << "Минимальное значение в массиве: " << min << endl;
    cout << "Максимальное значение в массиве: " << max << endl;
#endif // MINMAX


    int number_of_shifts;
    cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
#ifdef COLUMNS_SHIFT  
    //Влево

    cout << "Влево: " << endl << endl;
    for (int i = 0; i < number_of_shifts; i++)
    {
        for (int i = 0; i < ROWS; i++)
        {
            int buffer = arr[i][0];
            for (int j = 1; j < COLS; j++)
            {
                arr[i][j - 1] = arr[i][j];
            }
            arr[i][COLS - 1] = buffer;
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
    cout << delimeter << endl;

    //Вправо
    cout << "Вправо: " << endl << endl;

    for (int i = 0; i < number_of_shifts * 2; i++) // компенсируем сдвиг влево
    {
        for (int i = 0; i < ROWS; i++)
        {
            int buffer = arr[i][COLS - 1];
            for (int j = COLS - 1; j > 0; j--)
            {
                arr[i][j] = arr[i][j - 1];
            }
            arr[i][0] = buffer;
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
    cout << delimeter << endl;
#endif // COLUMNS_SHIFT

#ifdef CROSS_CUTTING_SHIFT
    //Влево
    cout << "Влево: " << endl << endl;

    for (int i = 0; i < number_of_shifts; i++)
    {
        int buffer = arr[0][0];
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 1; j < COLS; j++)
            {
                arr[i][j - 1] = arr[i][j];
            }
            if (i != ROWS - 1) arr[i][COLS - 1] = arr[i + 1][0];
        }
        arr[ROWS - 1][COLS - 1] = buffer;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
    cout << delimeter << endl;

    //Вправо
    cout << "Вправо: " << endl << endl; // компенсируем сдвиг влево

    for (int i = 0; i < number_of_shifts * 2; i++)
    {
        int buffer = arr[ROWS - 1][COLS - 1];
        for (int i = ROWS - 1; i >= 0; i--)
        {
            for (int j = COLS - 1; j > 0; j--)
            {
                arr[i][j] = arr[i][j - 1];
            }
            if (i != 0) arr[i][0] = arr[i - 1][COLS - 1];
        }
        arr[0][0] = buffer;
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
    cout << delimeter << endl;
#endif // CROSS_CUTTING_SHIFT
#ifdef SORT
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            for (int k = i; k < ROWS; k++)
            {
                for (int l = k == i ? j + 1 : 0; l < COLS; l++)
                {
                    //arr[i][j] - Выбранный элемент;
                    //arr[k][l] - перебираемый элемент;
                    if (arr[k][l] < arr[i][j])
                    {
                        int buffer = arr[i][j];
                        arr[i][j] = arr[k][l];
                        arr[k][l] = buffer;
                    }
                }
            }
        }
    }
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
#endif // SORT
#ifdef UNIQUE_RAND
    const int MAX = ROWS * COLS;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            bool unique;

            do
            {
                arr[i][j] = rand() % MAX;
                unique = true;
                for (int k = 0; k <= i; k++)
                {
                    int limit = (k == i) ? j : COLS;
                    for (int l = 0; l < limit; l++)
                    {
                        if (arr[i][j] == arr[k][l])
                        {
                            unique = false;
                            break;
                        }
                    }
                }
            } while (!unique);

        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << tab;
        }
        cout << endl;
        cout << endl;
    }
#endif // UNIQUE_RAND


}
