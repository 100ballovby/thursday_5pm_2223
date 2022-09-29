#include <iostream>
using namespace std;

void multiply() {
    int num1, num2;  // объявление двух переменных одного типа
    cout << "Введи число 1: ";
    cin >> num1;
    cout << "Введи число 2: ";
    cin >> num2;

    // перемножу эти числа в новой переменной
    int result = num1 * num2;
    cout << num1 << '*' << num2 << '=' << result;
}

void task2() {
    int b, h;
    float res;
    cout << "Основание: ";
    cin >> b;
    cout << "Высота: ";
    cin >> h;

    res = b * h * 0.5;
    cout << res;
}

void task3() {
    int k, n, pupils, apples;
    cout << "количество школьников: ";
    cin >> n;
    cout << "количество яблок: ";
    cin >> k;

    pupils = k / n;
    cout << pupils << " получит каждый" << endl;
    apples = k % n;
    cout << apples << " останется";

}

void task4() {
    int number;
    cout << "Введите число: ";
    cin >> number;

    cout << "Следующее: " << number + 1 << endl;
    cout << "Предыдущее: " << number - 1 << endl;
}

void task5() {
    int number, hundreds, tens, units;
    cout << "Введите число: ";
    cin >> number;

    hundreds = number / 100;
    tens = number / 10 % 10;
    units = number % 10;
    cout << number << '=' << hundreds + tens + units;
}
