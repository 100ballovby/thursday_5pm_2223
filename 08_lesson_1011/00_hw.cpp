#include <iostream>
#include <cmath>
using namespace std;

int randint(int min, int max) {
    /** Функция будет генерировать случайные числа
     * в диапазоне min-max **/
    return rand() % (max - min) + min;  // эту формулу просто нужно запомнить
}

int hw() {
    const int length = 15;
    int c, count, mult, i_max, max;
    int arr[length];

    for (int i = 0; i < length; i++) {
        arr[i] = randint(-30, 30);
        cout << arr[i] << " | ";
    }
    cout << endl;
    cout << "Insert C: ";
    cin >> c;
    count = 0;
    // найти количество элементов больших С
    for (int i = 0; i < length; i++) {
        if (c < arr[i]) {
            count++;
        }
    }
    cout << "Count of elements greater than " << c << " is " << count << endl;

    // произведение элементов после максимального по модулю
    max = arr[0];
    i_max = 0;
    for (int i = 1; i < length; i++) {
        if (abs(arr[i]) > max) {
            max = abs(arr[i]);
            i_max = i;
        }
    }
    cout << "The greatest element is " << max << ". Index is " << i_max << endl;
    mult = 1;
    for (int i = i_max; i < length; i++) {
        mult *= arr[i];
    }
    cout << "Multiplication of elements after max: " << mult << endl;

}