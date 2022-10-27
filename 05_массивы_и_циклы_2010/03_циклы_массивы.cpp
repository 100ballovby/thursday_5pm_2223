#include <iostream>
using namespace std;

void for_and_array() {
    int marks[] = {9, 10, 8, 5, 6, 9, 8, 7, 1};
    int array_length = sizeof(marks) / sizeof(marks[0]); // считаем длинну массива

    for (int i = 0; i < array_length; i += 1) { // количество повторений цикла = длине массива
        cout << "marks[" << i << "] = " << marks[i] << endl;
    }
}

void mid_sum() {
    int marks[] = {9, 5, 8, 5, 6, 9, 8, 7, 1};
    int array_length = sizeof(marks) / sizeof(marks[0]); // считаем длинну массива
    // посчитать среднее арифметическое оценок из массива
    double summary = 0; // сумма всех элементов массива
    for (int i = 0; i < array_length; i += 1) { // количество повторений цикла = длине массива
        summary += marks[i];
    }
    cout << "Mid: " << summary / array_length << endl;
}
