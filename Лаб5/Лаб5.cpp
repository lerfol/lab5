#include <iostream>
#include <clocale>
#include <fstream>
#include <ctime>
#include "ClassBin.h"
using namespace std;

int main()
{
    srand(time(0));
    setlocale(LC_ALL, "rus");
    /*ClassFile EX1;
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    EX1.FileCin("ex1.bin", size);
    EX1.FileCout("ex1.bin", size);
    EX1.ex_1("ex1.bin",size);*/

    /*ClassFile EX2;
    int size_2, n;
    cout << "Введите размер массива: ";
    cin >> size_2;
    cout << "Введите размер матрицы: ";
    cin >> n;
    EX2.ex_2("ex2.bin", size_2, n);*/

    /*ClassFile EX4;
    int size_4;
    cout << "Введите размер массива: ";
    cin >> size_4;
    EX4.ex_4("ex_4.txt", size_4);*/

    /*ClassFile EX5;
    int size_5;
    cout << "Введите размер массива: ";
    cin >> size_5;
    EX5.ex_5("ex_5.txt", size_5);*/
    ClassFile EX6;
    EX6.ex_6("ex_6.txt");
}

