#include <iostream>
using namespace std;

void string_hw() {
    string phrase;  // создаем строку
    getline(cin, phrase);  // вводим в нее значнеия через getline
    int signs = 0;

    for (int i = 0; i < phrase.size(); i++) {  // перебираем каждый символ в строке
        if (phrase[i] == ',' || phrase[i] == '.'   // сравниваем символы со знаками преминания
            || phrase[i] == '!' || phrase[i] == '?' || phrase[i] == ';' || phrase[i] == ':') {
            signs++;  // увеличить счетчик знаков на 1
        }
    }

    cout << "Количество знаков препинания: " << signs << endl;
}

struct Advertising {
    int count_ads = 0;
    int percentage = 0;
    int earned = 0;
};

void struct_hw() {
    Advertising adv;

    cout << "Count ads: ";
    cin >> adv.count_ads;

    cout << "User percentage: ";
    cin >> adv.percentage;

    cout << "Total earn: ";
    cin >> adv.earned;

    cout << "Count ads: " << adv.count_ads << endl;
    cout << "User percentage: " << adv.percentage << endl;
    cout << "Total earn: " << adv.earned << endl;

    cout << "Total: " << adv.count_ads * adv.percentage * adv.earned << endl;
}