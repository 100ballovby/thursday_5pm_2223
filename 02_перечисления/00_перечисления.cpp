#include <iostream>
using namespace std;

void sizes() {
    cout << "Размеры типов данных" << endl;

    cout << "bool: " << sizeof(bool) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "char: " << sizeof(char) << endl;
}

int circle() {
    int r = 7;
    const double pi = 3.1415926; // константа
    return pi * (r * r);
}

void enumeration() {
    enum RainbowColors {  // создал перечисление
        // список значений, которые она способна принять
        Red = 1,  // дефолтное значение для цвета красный, остальные будут считаться автоматом
        Orange,
        Yellow,
        Green,
        Blue,
        Indigo,
        Violet
    };
    // создадим переменную на основе перечисления
    RainbowColors FavoriteColor = Indigo;
    // значение переменной присваивается из перечисления
    cout << "Мой любимый цвет: " << FavoriteColor;
}