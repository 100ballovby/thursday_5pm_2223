#include <iostream>
using namespace std;


int main() {
    int a;
    cout << "Введи число: ";
    cin >> a;

    if ((10 <= a) && (a <= 25)) { // && - Логическая операция И, связывающая два высказывания
        cout << a << " - correct";
    } else {
        cout << a << " isn't correct" << endl;
    }

    return 0;
}
