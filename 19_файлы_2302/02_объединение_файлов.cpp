#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int find_max_in_file(string file_path) {
    // создадим поток чтения из файла
    ifstream file;
    file.open(file_path, ios::in);

    // eof() - определяет конец файла (то место, где закончились данные)
    int content, maximum = 0;
    while (file >> content) {  // пока в content что-то записывается
        if (content > maximum) {
            maximum = content;
        }
    }
    file.close();
    return maximum;
}

int merge_files() {
    // Нужно соединить два файла в один
    ifstream file1, file2;
    ofstream file3;

    char ch;
    file1.open("../file1.txt", ios::in);
    file2.open("../file2.txt", ios::in);

    if (!file1 || !file2) {  // если файл1 не пустой ИЛИ файл2 не существуют (или не смогли открыть)
        perror("\nError Message in file1!!!");  // выбрасывает ошибку с текстом
        exit(EXIT_FAILURE);  // закрывает программу
    }

    file3.open("../res_file.txt", ios::out);
    if (!file3) {
        perror("\nError Message in file3!!!");  // выбрасывает ошибку с текстом
        exit(EXIT_FAILURE);  // закрывает программу
    }

    while (!file1.eof()) {  // пока мы не дошли до конца файла
        file1 >> ch;  // записываем каждый символ из файла 1
        file3 << ch;  // перебрасываем его в файл 3
    }
    while (!file2.eof()) {  // пока мы не дошли до конца файла
        file2 >> ch;  // записываем каждый символ из файла 1
        file3 << ch;  // перебрасываем его в файл 3
    }

    cout << "\nTwo files were merged into file3 successfully" << endl;
    file1.close();
    file2.close();
    file3.close();
    return 0;
}



