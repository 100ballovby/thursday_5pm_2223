#include <iostream>
using namespace std;

int randint(int min, int max) {
    /** Функция будет генерировать случайные числа
     * в диапазоне min-max **/
    return rand() % (max - min) + min;  // эту формулу просто нужно запомнить
}

void task1_hw() {
    int n, summ = 0;
    cout << "Insert n:";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        summ += i;
    }
    cout << summ << endl;
}

void task2_hw() {
    int array[100];
    int neg = 0, pos = 0, even = 0;
    for (int i = 0; i < 100; i++) {
        array[i] = randint(-20, 100);
        cout << array[i] << ", ";
    }
    cout << endl;
    // посчитать отрицательные, положительные и четные элементы массива
    for (int i = 0; i < 100; i++) {
        if (array[i] < 0) {  // если число в массиве меньше нуля
            neg++;  // посчитать его
        }
        if (array[i] > 0) {  // если число в массиве больше нуля
            pos++;  // посчитать его
        }
        if (array[i] % 2 == 0) {  // если число в массиве делится на два без остатка
            even++;
        }
    }
    cout << "Negative: " << neg << endl;
    cout << "Positive: " << pos << endl;
    cout << "Even: " << even << endl;
}

void task2_hw_v2() {
    int array[100];
    int neg = 0, pos = 0, even = 0;
    for (int i = 0; i < 100; i++) {
        array[i] = randint(-20, 100);
    }
    // посчитать отрицательные, положительные и четные элементы массива
    for (int number : array) {  // перебираю числа в массиве array (!!!не индексы!!!)
        if (number < 0) {  // если число в массиве меньше нуля
            neg++;  // посчитать его
        }
        if (number > 0) {  // если число в массиве больше нуля
            pos++;  // посчитать его
        }
        if (number % 2 == 0) {  // если число в массиве делится на два без остатка
            even++;
        }
        cout << number << " | ";
    }
    cout << endl;
    cout << "Negative: " << neg << endl;
    cout << "Positive: " << pos << endl;
    cout << "Even: " << even << endl;
}

void task3_hw() {
    int array[100];
    int summ = 0;
    for (int i = 0; i < 100; i++) {
        array[i] = randint(-20, 100);
    }
    for (int i = 0; i < 10; i++) {
        summ += array[i];
    }
    cout << "Summary of first 10 elements: " << summ << endl;
}