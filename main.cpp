#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// #### блок с функциями ###
int menu();  // функция-кандидат (объявление функции)
bool isLoggedIn(string username, string password);
bool userRegister(string *username, string *password, string *confirmation);

int main() {
    int option = 3;
    while (option != 0) {
        option = menu();
        switch (option) {
            case 1:
                cout << "Option 1" << endl;
                break;
            case 2:
                string login, password;
                cout << "Your login: "; cin >> login;
                cout << "Your password: "; cin >> password;
                bool status = isLoggedIn(login, password);

                if (status) {
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

bool userRegister(string *username, string *password, string *confirmation) {
    if (password == confirmation) {
        ofstream file;
        file.open("../data/" + *username + ".txt", ios::out);
        file << username << endl << password;
        file.close();
        return true;
    } else {
        return false;
    }

}



