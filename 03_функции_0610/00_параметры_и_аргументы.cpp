#include <iostream>
using namespace std;

// Эта функция не имеет никаких параметров
void print() {
    cout << "В функции print()" << endl;
}

// Эта функция принимает целочисленный параметр а
void printValue(int a) {
    cout << "Мне передали: " << a << endl;
}

// Эта функция принимает два параметра a и b
int add(int a, int b) {
    /* При вызоове функции, все ее параметры создаются как
     * локальные переменные, а значение каждого аргумента
     * присваивается в соответсвующую переменную. Этот процесс
     * называется "передача по значению" */
    int res = a + b;
    return res;
}

int multiply(int a, int b) {
    int res = a * b;
    return res;
}

int doubleNumber(int n) {
    return n * 2;
}

int m() {
    print(); // Вызываю функцию print
    printValue(6);
    cout << add(2 + 3, 3 + 7) << endl;  // вызываю функцию add и передаю ей аргументы
    cout << add(7, multiply(3, 5));  // add(7, 15)

    int number;
    cout << "Введите число: ";
    cin >> number;
    cout << doubleNumber(number);
    return 0;
}
