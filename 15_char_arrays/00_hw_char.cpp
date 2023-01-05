#include <iostream>
#include <cstring>
using namespace std;

int zapusk_me() {
    char string[100];
    cout << "Inser smth:";
    cin.getline(string, 100);

    for (int i = 0; i < strlen(string); i++) {
        if (isdigit(string[i]) && string[i + 1] == '.' && isdigit(string[i + 2])) {
            int j = i + 2;  // фиксирую индекс символа после точки
            cout << string[i] << string[i + 1];  // вывожу десятічную дробь с точкой
            do {
                cout << string[j];  // вывожу символы строки
                j++;

            } while (isdigit(string[j]));  // пока они являются числами
            cout << endl;
        }
    }
    return 0;
}
