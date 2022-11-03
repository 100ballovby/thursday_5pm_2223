#include <iostream>

using namespace std;

void lab1_task2() {
    srand(time(NULL));
    int array[10], min, max, i_min, i_max;
    for (int i = 0; i < 10; i++) {
        // array[i] = randint(-10, 10);
        cout << array[i] << ", ";
    }
    // Найти в массиве наибольший и наименьший элементы и поменять их местами
    min = array[0];  // считаю, что самый маленький элемент массива - это первый
    max = array[0];  // считаю, что самый большой элемент массива - это первый
    i_min = 0;  // храню индекс минимального элемента
    i_max = 0;  // храню индекс максимального элемента
    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {  // если какой-то элемент массива больше max
            max = array[i]; // присвоить max значение этого элемента массива
            i_max = i;  // присвоить i_max индекс элемента в массиве (i)
        }
        if (array[i] < min) {
            min = array[i];
            i_min = i;
        }
    }
    //array[i_max] = min;  // на место максимального элемента поставить минимальный
    //array[i_min] = max;  // на место минимального элемента поставить максимальный
    cout << endl;
    cout << "Max: " << max  << " index = " << i_max << endl;
    cout << "Min: " << min << " index = " << i_min << endl;

    int mult = 1, summ = 0;
    if (i_min > i_max) {
        for (int i = i_max; i >= i_min; i--) {
            mult *= array[i];
            summ += array[i];
        }
    } else {
        for (int i = i_min; i <= i_max; i++) {
            mult *= array[i];
            summ += array[i];
        }
    }
    cout << "Mult between min and max: " << mult << endl;
    cout << "Summ between min and max: " << summ << endl;
}