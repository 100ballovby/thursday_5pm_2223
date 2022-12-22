#include <iostream>
using namespace std;

void task_spaces() {
    /* Заполонить строку пробелами, пока ее длина
     * не будет равна n*/
    char phrase[100];
    cout << "Enter string, cancel with Enter: ";
    cin.getline(phrase, 100);

    int i = strlen(phrase), n;
    cout << "Type n: "; cin >> n;

    while (strlen(phrase) < n) {
        phrase[i] = ' ';
        i++;
    }
    cout << "[" << phrase << "]" << endl;
}

void task_count_one() {
    /* В строке, состоящей из групп 0 и 1 посчитать количество единиц
     * в группах с нечетным количеством символов. */
    char phrase[100];
    cout << "Enter string, cancel with Enter: ";
    cin.getline(phrase, 100);
    int count_one = 0;  // считает количество единиц
    int countn = 0;  // считает количество символов в группах
    for (int i = 0; i < strlen(phrase); i++) {
        if (phrase[i] == '1') {  // сравниваю символы с единицей
            count_one++;  // если нашли единицу "считаем" ее
        } else if (phrase[i] == '0') {  // если встретился 0
            if (count_one % 2 != 0) {  // если количество единиц не четное
                countn += count_one;  // добавляем это количество единиц к сумме
            }
            count_one = 0;  // обнуляем счетчик единиц
        }
    }
    cout << "Count of 1: " << countn << endl;
}
