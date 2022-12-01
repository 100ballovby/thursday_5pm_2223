#include <iostream>
using namespace std;

void strings_basic() {
    string word;  // строка - текстовый тип данных

    cout << "Введите слово: ";
    cin >> word;
    cout << "Слово: " << word << endl;
    // у строк есть индексы
    cout << "Первая буква слова: " << word[0] << endl;
    word[0] = '4';  // элементы строки можно заменять по индексу
    cout << word << endl;
}
void strings_cin() {
    string phrase, phrase2;
    int age;

    cout << "Введи свой возраст: ";
    cin >> age;
    cin.ignore(32767, '\n');  // игнорировать символ новой строки (нажатие на enter)

    // перед использованием функции getline (всегда) прописывайте cin.ignore
    cout << "Введите фразу: ";
    getline(cin, phrase);

    cout << "Введите еще одну фразу: ";
    getline(cin, phrase2);
    cout << phrase << endl;
    cout << phrase2 << endl;
}
void strings_like_array() {
    // Перебор строки. Строки, как и массивы, можно перебирать по элементам
    string phrase = "Hello, how are you?";
    // функция .length() возвращзает
    // целочисленное значение - длина строки (количество символов)
    for (int i = 0; i < phrase.length(); i++) {
        if (phrase[i] == ',') {
            phrase[i] = '!';
        } else if (phrase[i] == 'h') {
            phrase[i] = 'H';
        }
    }
    cout << phrase + " See you!" << endl;
    // строки можно складывать - конкатенация
}