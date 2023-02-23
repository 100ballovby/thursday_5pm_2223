#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void write_file(string file_path) {
    // создаем потом для записи в файл
    ofstream file;  // это то же самое, что создать переменную определенного типа, просто вместо типа данных указывается ofstream
    file.open(file_path, ios::out);  // открыть файл в соответствующем режиме
    int n;
    cout << "Insert num: "; cin >> n;
    for (int i = 0; i < n; i++) {
        file << i << endl;  // записать в файл значение i и после него поставить tab
    }
    file.close();  // закрываем файл после внесения изменений
}

void read_file(string file_path) {
    // создадим поток чтения из файла
    ifstream file;
    file.open(file_path, ios::in);

    // eof() - определяет конец файла (то место, где закончились данные)
    int content;
    while (!file.eof()) {  // пока не дошли до конца файла
        file >> content;
        cout << content << "\t";
    }
    file.close();
}

int file_main() {
    string path = "../myfile.txt";
    write_file(path);
    read_file(path);
    return 0;
}



