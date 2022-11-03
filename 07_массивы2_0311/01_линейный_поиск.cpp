#include <iostream>

using namespace std;

void linear_search() {
    srand(time(NULL));
    int array[10], key;
    for (int i = 0; i < 10; i++) {
        // array[i] = randint(-10, 10);
        cout << array[i] << ", ";
    }
    /** Алгоритм линейного поиска заключается в том, чтобы
     * последовательно просмотреть каждый элемент массива по индексу,
     * сравнить их с искомым значением и, если значение найдено,
     * вернуть индекс найденного в массиве элемента **/
    cout << "What number you want to find? ";
    cin >> key;
    int i_key = -1; // сюда запишем индекс найденного элемента
    for (int i = 0; i < 10; i++) {
        if (array[i] == key) {  // если число в массиве совпало с ключом
            i_key = i;  // записываю индекс числа в массиве в переменную
            break;  // принудительный выход из цикла
        }
    }

    if (i_key == -1) {
        cout << "Not found!" << endl;
    } else {
        cout << "Index of " << key << " is " << i_key << endl;
    }
}