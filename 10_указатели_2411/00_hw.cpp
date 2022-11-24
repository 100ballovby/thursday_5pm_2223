#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1);
    return num;
}

void hw_2411_task1() {
    srand(time(NULL));
    const int n = 15;
    int mult = 1;

    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = randint(-10, 10);
        cout << a[i] << "\t";
    }

    cout << endl;
    for (int i = 0; i < n; i += 2) {  // i всегда увеличивается на 2
        mult *= a[i];
    }
    cout << mult << endl;

    // сумма до последнего положительного
    int sum = 0;
    int l_pos = -1;
    for (int i = n - 1; i > -1; i--) {
        if (a[i] > 0) {
            l_pos = i;
            break;
        }
    }
    cout << "Индекс последнего положительного " << l_pos << endl;
    for (int i = 0; i < l_pos; i++) {
        sum += a[i];
    }
    cout << sum << endl;
}

void hw_2411_task2() {
    srand(time(NULL));
    const int n = 15;

    int a[n];
    for (int i = 0; i < n; i++) {
        a[i] = randint(-3, 3);
        cout << a[i] << "\t";
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {  // если элемент по индексу положительный
            sum += a[i];  // добавляю
        }
    }
    cout << endl;
    cout << sum << endl;

    // сумма после последнего нуля
    int sum1 = 0;
    int l_zero = -1;
    for (int i = n - 1; i > -1; i--) {
        if (a[i] == 0) {
            l_zero = i;
            break;
        }
    }
    cout << "Индекс последнего нуля " << l_zero << endl;
    for (int i = l_zero; i < n; i++) {
        sum1 += a[i];
    }
    cout << sum1 << endl;
}