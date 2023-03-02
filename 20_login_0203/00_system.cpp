#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// #### блок с функциями ###
int menu();  // функция-кандидат (объявление функции)
bool isLoggedIn(string username, string password);
bool userRegister(string username, string password, string confirmation);
string loginLowercase(string username);

int system_main() {
    int option = 3;
    string login, password, confirm;
    bool reg_status, log_status;

    while (option != 0) {
        option = menu();
        switch (option) {
            case 1:
                cout << "Login: "; cin >> login;
                login = loginLowercase(login);
                cout << "Password: "; cin >> password;
                cout << "Confirm password: "; cin >> confirm;

                reg_status = userRegister(login, password, confirm);

                if (reg_status) {
                    cout << "Successfully registration!\n\n";
                } else {
                    cout << "Passwords aren't match! Try again!\n\n";
                }
                break;
            case 2:
                cout << "Your login: "; cin >> login;
                login = loginLowercase(login);
                cout << "Your password: "; cin >> password;
                log_status = isLoggedIn(login, password);

                if (log_status) {
                    cout << "Login successful" << endl;
                } else {
                    cout << "Login or/and password is incorrect!" << endl;
                }
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


bool isLoggedIn(string username, string password) {
    string uname, passw;
    ifstream read("../data/" + username + ".txt");  // Название файла data/architect.txt
    getline(read, uname);
    getline(read, passw);

    read.close();

    return uname == username && passw == password;
}

bool userRegister(string username, string password, string confirmation) {
    if (password == confirmation) {
        ofstream file;
        file.open("../data/" + username + ".txt", ios::out);
        file << username << endl << password;
        file.close();
        return true;
    } else {
        return false;
    }
}


string loginLowercase(string username) {
    string res;
    for (int i = 0; i < username.length(); i++) {
        res += tolower(username[i]);
    }
    return res;
}
