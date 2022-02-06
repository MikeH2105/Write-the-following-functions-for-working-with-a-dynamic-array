/*Написати такі функції для роботи з динамічним масивом:
■■Функція розподілу динамічної пам’яті;
■■Функція ініціалізації динамічного масиву;
■■Функція друку динамічного масиву;
■■Функція видалення динамічного масиву;
■■Функція додавання елемента в кінець масиву;
■■Функція вставки елемента за вказаним індексом;
■■Функція видалення елемента за вказаним індексом.
*/


#include <iostream>
#include <locale>
#include <windows.h>
#include<stdlib.h>
using namespace std;

void initArr(int* arr, int size) {                  //Функція розподілу динамічної пам’яті;
    int* arrA = new int[size];
}

void inputArr(int* arr, int size) {               // Функція ініціалізації динамічного масиву;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 20;
    }
}

void printArr(int* arr, int& size) {            //Функція друку динамічного масиву;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "   ";
    }
}

void deleteArr(int* arr, int& size) {           //Функція видалення динамічного масиву
    delete[]arr;
}

void addArr(int* arrA, int size1, int* arrB, int size2) { //Функція додавання елемента в кінець масиву;

    for (int i = 0; i < size2; i++)
    {
        arrB[i] = arrA[i];
        if (i == size2 - 1)
        {
            cout << "Веддіть значення нового останнього елемента массиву:" << endl;
            cin >> arrB[i];
            i++;
        }

    }

}

void addIndexArr(int* arrA, int size1, int* arrC) {//Функція вставки елемента за вказаним індексом;
    int n = 0;
    int m = 0;

    cout << "Веддіть номер елемента массиву що будемо змінювати:" << endl;
    cin >> n;
    cout << "Веддіть значення нового елемента массиву:" << endl;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        arrC[i] = arrA[i];
        if (i == n - 1)
        {
            arrC[i] = m;
            i++;
        }
    }
    for (int i = n; i < size1; i++)
    {
        arrC[i] = arrA[i];
    }
}

void delIndexArr(int* arrA, int size1, int* arrD, int& size3) {//Функція видалення елемента за вказаним індексом.
    int n = 0;
    cout << "Веддіть номер елемента массиву що будемо видаляти:" << endl;
    cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        arrD[i] = arrA[i];
    }
    for (int i = n - 1; i < size3; i++)
    {
        arrD[i] = arrA[i + 1];
    }

}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size1 = 0;

    cout << "Введіть розмір масиву A  = ";
    cin >> size1;
    int size2 = size1 + 1;
    int size3 = size1 - 1;
    int* arrA = new int[size1];
    int* arrB = new int[size2];
    int* arrC = new int[size1];
    int* arrD = new int[size3];
    initArr(arrA, size1);
    inputArr(arrA, size1);
    cout << "Заповнений довільно масив виглядає наступним чином:" << endl;
    printArr(arrA, size1);
    cout << endl;
    addArr(arrA, size1, arrB, size2);
    cout << endl;
    cout << "Заповнений довільно масив з добавленим елементом в кінець масиву виглядає наступним чином:" << endl;
    printArr(arrB, size2);
    cout << endl;
    addIndexArr(arrA, size1, arrC);
    printArr(arrC, size1);
    cout << endl;
    delIndexArr(arrA, size1, arrD, size3);
    cout << "Видалений за вашим індексом масив виглядає наступним чином:" << endl;
    printArr(arrD, size3);
    cout << endl;


    deleteArr(arrA, size1);




}