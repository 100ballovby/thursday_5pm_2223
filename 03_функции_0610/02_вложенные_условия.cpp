#include <iostream>
using namespace std;


void included_condition () {
    int a;
    cout << "Введи число: ";
    cin >> a;

    if (a >= 10) {
        if (a <= 25) {
            cout << a << " - correct" << endl;
        } else {
            cout << a << " - isn't correct" << endl;  // выполнится этот код
        }
    } else {
        cout << a << " is exactly 15" << endl;
    }
}