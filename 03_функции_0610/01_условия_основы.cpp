#include <iostream>
using namespace std;


void uslovia() {
    int a;
    cout << "Введи число: ";
    cin >> a;

    if (a > 15) {  // если введенное число больше 15
        cout << a << " is greater than 15" << endl;  // выполнится этот код
    } else if (a < 15) {  // иначе если введенное число меньше 15
        cout << a << " isn't greater than 15" << endl;  // выполнится этот код
    } else {  // иначе (если введенное число равно 15)
        cout << a << " is exactly 15" << endl;
    }

}