#include <iostream>
#include <cmath>
using namespace std;

int randint(int min, int max) {
    /** Функция будет генерировать случайные числа
     * в диапазоне min-max **/
    return rand() % (max - min) + min;  // эту формулу просто нужно запомнить
}

int main() {
    srand(time(NULL));
    int array[20], max, i_max;
    for (int i = 0; i < 20; i++) {
        array[i] = randint(-5, 30);
        cout << array[i] << ", ";
    }
    max = array[0];
    i_max = 0;
    // найдем максимальный по модулю элемент
    for (int i = 0; i < 20; i++) {
        if (array[i] > max) {
            i_max = i;
        }
    }
    cout << "Absolute max index: " << i_max << endl;

    // найдем сумму элементов после первого положительного элемента массива
    int i_pos = 0;
    for (int i = 0; i < 20; i++) {
        if (abs(array[i]) > 0) {
            i_pos = i;
            break; // мне нужен ПЕРВЫЙ положительный, поэтому как только нашли, выходим из цикла
        }
    }
    int summ = 0;
    for (int i = i_pos; i < 20; i++) {
        summ += array[i];
    }
    cout << "Summ after first positive element: " << summ << endl;
    return 0;
}
