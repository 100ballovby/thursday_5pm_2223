#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num;
}


void ptr_hw1() {
    int n1, n2;
    cout << "Введите 2 числа через пробел: ";
    cin >> n1 >> n2;  // значение до пробела запишется в n1, значение после - в n2
    int *ptr1 = &n1;
    int *ptr2 = &n2;

    int sum = *ptr1 + *ptr2;
    cout << sum;
}

void ptr_hw2() {
    srand(time(NULL));
    int length;
    cout << "Length of array: ";
    cin >> length;
    int *array = new int[length];

    for (int i = 0; i < length; i++) {
        *(array + i) = randint(1, 10);
        cout << *(array + i) << ", ";
    }

    int i_max = 0;
    int max = *array;
    for (int i = 1; i < length; i++) {
        if (max < *(array + i)) {
            i_max = i;
            max = *(array + i);
        }
    }
    cout << "Max element: " << max << ", Index: " << i_max << endl;
}