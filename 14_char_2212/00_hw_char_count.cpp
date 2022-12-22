#include <iostream>
using namespace std;

int hw_char_count() {
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

    int letters = 0, punct = 0, nums = 0;

    for (int j = 0; j < strlen(phrase); j++) {
        if (isdigit(phrase[j])) {
            nums++;
        } else if (isalpha(phrase[j])) {
            letters++;
        } else if (ispunct(phrase[j])) {
            punct++;
        }
    }
    cout << "Letters: " << letters << endl;
    cout << "Punctuations: " << punct << endl;
    cout << "Numbers: " << nums << endl;
    return 0;
}



