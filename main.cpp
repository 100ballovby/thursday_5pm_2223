#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// #### блок с функциями ###
int menu();  // функция-кандидат (объявление функции)
bool isLoggedIn(string *username, string password);
bool userRegister(string *username, string *password, string *confirmation);

int main() {
    int option;
    while (option != 0) {
        option = menu();
        switch (option) {
            case 1:
                cout << "Option 1" << endl;
                break;
            case 2:
                cout << "Option 2" << endl;
                break;
        }
    }
    return 0;
}

int menu() {
    cout << "Choose option...\n";
    cout << "0 - exit\n1 - Register\n2 - Login\n\n";
    int ans;  // объявление переменной
    cin >> ans;  // присвоение значения (инициализация)
    return ans;
}



