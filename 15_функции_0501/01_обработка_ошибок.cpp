#include <iostream>
#include <string>
using namespace std;

int mult(int a, int b) {
    return a * b;
}


double division(int a, int b) {
    if (b == 0) {
        throw "Cannot divide by zero";  // выдаю сообщение об ошибке при делении на 0
    } else {
        return a / b;
    }
}

void bivshiy_main() {
    int x = 50;
    int y = 0;
    double z = 0;

    try {  // попробовать выполнить
        z = division(x, y);  // разделить x на y
        cout << z << endl;  // и вывести эти значения
    } catch (const char* msg) {  // поймать исключение
        cerr << msg << endl;  // выдать сообщение об ошибке. текст берется из функции
// cerr - c error - выдать сообщение об ошибке
    }
}