#include <iostream>
using namespace std;

int main() {
    // как записать текст с пробелами в char массив
    char phrase[100];
    char symbol;  // символ строки
    int i = 0;  // счетчик
    cout << "Enter string, cancel with Enter: ";
    while (symbol != '\n') {
        symbol = getchar();  // функция берет символ с клавиатуры
        phrase[i] = symbol;  // вставить символ в phrase на место i
        i++;
    }

    cout << phrase << endl;
    return 0;
}



