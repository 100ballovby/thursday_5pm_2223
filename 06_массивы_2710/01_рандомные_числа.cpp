#include <iostream>
#include <cmath>  // библиотека с математическими функциями
using namespace std;

void goto_operator() {
    double x;  // дробь, для которой мы найдем квадратный корень
    tryAgain:  // метка возвращения потока программы
    /* Если что-то пошло не так, программа
     * вернется в точку tryAgain */
    cout << "Enter a float number: ";
    cin >> x;

    if (x < 0.0) {
        goto tryAgain;  // попросить ввести число еще раз
    }

    cout << "The square root of " << x << " is " << sqrt(x) << endl;
}

void cmath_library() {
    cout << "sin(1) = " << cos(1) << endl;  // косинус единицы
    cout << "cos(1) = " << sin(1) << endl;  // синус единицы
    // функции степени
    cout << "2^3 = " << pow(2, 3) << endl;  // pow(число, показатель) - возводит в степень
    cout << "√49 = " << sqrt(49) << endl;  // sqrt(число) - квадратный корень числа
    cout << "куб корень 121 = " << cbrt(121) << endl;  // cbrt(число) - кубический корень
    cout << "Гипотенуза (50, 60) " << hypot(50, 60) << endl;  // hypot(катет1, катет2) - считает гипотенузу по катетам
    // функции округления
    cout << "2.67 = " << ceil(2.67) << endl;  // ceil(число) - округление вверх
    cout << "2.67 = " << floor(2.67) << endl;  // floor(число) - округление вниз
    cout << "10 % 3 = " << fmod(10, 3) << endl;  // находит остаток от деления чисел

    cout << "|-5| = " << abs(-5) << endl;  // находит абсолютное значение (модуль)
}

void stars() {
    int stars;
    cout << "How many stars do you need? ";
    cin >> stars;

    for (int i = 1; i <= stars; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*"; // выводить звездочку i раз
        }
        cout << endl;
    }
    for (int i = stars - 1; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void power() {
    /* написать программу, которая получает от пользователя
     * два числа - число и показатель степени. На выходе нужно
     * отдать число, возведенное в тот показатель, который напишет
     * пользователь. */
    int number, power;
    cout << "Insert number: ";
    cin >> number;
    cout << "Insert power: ";
    cin >> power;
    int res = 1; // степень
    for (int i = 0; i < power; i++) {
        res *= number;
    }
    cout << number << "^" << power << " = " << res << endl;
}

void randint() {
    srand(time(NULL)); // начало диапазона = текущему времени
    for (int i = 0; i < 100; i++) {
        cout << rand() % 100 - 10 << "\t";  // ставит 4 пробела после вывода
        if ((i + 1) % 5 == 0) {  // если сгенерировали 5 случайных чисел
            cout << endl;  // сбросить строку
        }
    }
}

void random_array() {
    /* наполнить массив каким-то количеством случайных чисел */
    srand(time(NULL));  // борьба с одинаковыми числами в массиве 
    const int length = 100;
    int array_rand[length]; // объявил массив на 100 элементов
    for (int i = 0; i < length; i++) {
        array_rand[i] = rand() % 100 - 10;
        cout << array_rand[i] << ", ";
    }
}