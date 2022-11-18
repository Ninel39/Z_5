// Z_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
#include<time.h>
#include<stdlib.h>

using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	/*В двумерном массиве целых чисел посчитать сумму элементов: в каждой строке; в каждом
столбце; одновременно по всем строкам и всем столбцам. Оформить следующим образом:
3 5 6 7 | 21
12 1 1 1 | 15
0 7 12 1 | 20
---------------------
15 3 19 9 | 56
	*/

    const int size = 10;
    int array[size][size];
    int arr[10];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
        {
            array[i][j] = 1 + rand() % 20;
        }
    }
    for (int i = 0; i < size; i++) {
        int count = 0;//сумма по строке
        for (int j = 0; j < size; j++)
        {
            count += array[i][j];
            cout << array[i][j] << "\t";
        }
        cout << " || " << count << endl;
    }
    cout << "-----------------------------------------------------------------------" << endl;
    for (int i = 0; i < 10; i++) {
        int count1 = 0;//сумма по столбцу
        for (int j = 0; j < 10; j++)
        {
            count1 += array[j][i];
        }
        arr[i] = count1;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\t";
    }
}

