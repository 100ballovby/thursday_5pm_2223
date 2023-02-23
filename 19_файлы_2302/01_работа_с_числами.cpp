#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int randint(int start, int end) {
    // функция получает промежуток чисел и в рамках него генерирует случайные
    int num = start + rand() % (end - start + 1); // если не будет +1, то конец промежутка не будет включен
    return num;
}

void write_file(string file_path, int quant) {
    // создаем потом для записи в файл
    ofstream file;  // это то же самое, что создать переменную определенного типа, просто вместо типа данных указывается ofstream
    file.open(file_path, ios::out);  // открыть файл в соответствующем режиме

    for (int i = 0; i < quant; i++) {
        file << randint(-200, 200) << endl;  // записать в файл значение i и после него поставить tab
    }
    file.close();  // закрываем файл после внесения изменений
}

void read_file(string file_path) {
    // создадим поток чтения из файла
    ifstream file;
    file.open(file_path, ios::in);

    // eof() - определяет конец файла (то место, где закончились данные)
    int content;
    while (file >> content) {  // пока в content что-то записывается
        cout << content << "\t";
    }
    file.close();
}

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

int task_max_in_file() {
    srand(time(NULL));
    int n;
    cout << "N = "; cin >> n;

    string path = "../myfile.txt";
    write_file(path, n);
    read_file(path);
    cout << "\n\nThe greatest element is: " << find_max_in_file(path) << endl;
    return 0;
}



