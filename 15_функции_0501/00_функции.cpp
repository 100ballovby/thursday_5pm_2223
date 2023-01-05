#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string word) {
    bool res = true;
    int len = word.length();
    for (int i = 0; i < len; i++) {
        if (word[i] != word[len - 1 - i]) {  // если буквы не совпадают
            res = false;  // считаем, что слово - не палиндром
            break;  // выходим из цикла
        }
    }
    return res;
}

void print_bool(bool answer) {  // функция с типом возврата void не возвращает ничего
    if (answer) {  // answer == 1
        cout << "True" << endl;
    } else {  // answer == 0
        cout << "False" << endl;
    }
}

void task_1_palindrome() {
    string array[6] = {"level", "hello", "anna", "noon", "mama", "deified",};
    for (string str : array) {
        cout << str << " is palindrome: ";
        print_bool(is_palindrome(str));  // выводить значения на основе работы функции is_palindrome
    }
}

