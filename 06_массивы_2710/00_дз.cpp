#include <iostream>
using namespace std;

void task_1() {
    /*Easy: Задание N1
    Напишите цикл for, который выводит все четные числа в
     диапазоне от 0 до 20 */
    for (int i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    cout << endl;
    for (int i = 0; i <= 20; i += 2) {
        // i может увеличиваться на 1 (i++) или любое значение n (i += n)
        cout << i << endl;
    }
}

void task_2() {
    /* Easy: Задание N2
    Инициализируйте целочисленный фиксированный
     массив и посчитайте произведение элементов. */
    int array[] = {3, 2, 1, 5, 6, 2, 7};
    int length = sizeof(array) / sizeof(array[0]);
    int mult = 1; // произведение всех чисел массива
    for (int i = 0; i < length; i++) {
        mult *= array[i];
    }
    cout << mult << endl;
}