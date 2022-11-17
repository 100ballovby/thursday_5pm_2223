#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num;
}

void swap_odd_even() {
    const int size = 20;
    int array[size];

    // переставить четные элементы в начало, нечетные в конец
    int left_num = 0, right_num = size - 1;
    while (left_num < right_num) {  // пока границы массива не схлопнулись
        while (array[left_num] % 2 == 0 && left_num < right_num) {  // пока число четное и границы не схлопнулись
            left_num++;  // просматриваю четные элементы
        }

        while (array[right_num] % 2 == 1 && left_num < right_num) {  // пока число нечетное и границы не схлопнулись
            right_num--;  // просматриваю нечетные элементы
        }
        if (left_num < right_num) {
            swap(array[left_num], array[right_num]);  // переставляет элемент с одним индексом на место элемента с другим индексом в массиве
            left_num++;
            right_num--;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }
}

int eto_main() {
    const int size = 20;
    int array[size];

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = randint(-20, 50);
        cout << array[i] << ", ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; i++) {
        // последний i элемент всегда остается на месте
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {  // если число больше следующего
                swap(array[j], array[j + 1]);  // поменять их местами
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << ", ";
    }

    // алгоритм бинарного поиска
    int low, mid, high, key;
    cout << "Search: ";
    cin >> key;
    low = 0;
    high = size - 1;
    mid = low + (high - low) / 2;

    while (key != array[mid] || low != high ) {  // пока не нашли число И пока границы не сомкнулись
        if (key > array[mid]) {  // если искомое больше центрального
            low = mid + 1;  // сдвинуть левую границу массива вправо
        } else if (key < array[mid]) {  // если искомое меньше центрального
            high = mid - 1;  // сдвинуть правую границу массива влево
        } else {
            break;
        }
        mid = low + (high - low) / 2;
    }
    if (key == array[mid]) {
        cout << "Index of " << key << " is " << mid;
    } else {
        cout << "Not found!" << endl;
    }


    return 0;
}



