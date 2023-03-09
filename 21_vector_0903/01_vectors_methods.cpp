#include <iostream>
#include <vector>
#include <iterator>   // если не работает begin() и end()
#include <string>
using namespace std;

void print_vector(vector<int> &v) {
    auto begin = v.begin();
    auto end = v.end();
    for (auto ptr = begin; ptr!= end; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
}

void print_string_vector(vector<string> &v) {
    auto begin = v.begin();
    auto end = v.end();
    for (auto ptr = begin; ptr!= end; ptr++) {
        cout << *ptr << " ";
    }
    cout << endl;
}

void insert_elements_to_vector() {
    /** для добавления элементов в вектор есть:
    1. insert(pos, value) - вставляет элемент value на позицию pos
    2. insert(pos, n, value) - вставляет n элементов value на позицию pos
    3. insert(pos, begin, end) - вставляет начиная с позиции pos, элементы
     другого контейнера из диапазона между begin и end (копирование одного вектора в другой)
    4. insert(pos, values) - вставляет список значений, начиная с позиции pos
    **/

    vector<int> numbers1 { 1, 2, 3, 4, 5 };
    auto iter1 = numbers1.begin();
    numbers1.insert(iter1 + 2, 8);  // вставить на индекс 2 число  8
    cout << "Inserted value 8 on position 2: " << endl;
    print_vector(numbers1);

    // добавим несколько элементов после первого элемента
    auto iter2 = numbers1.begin();
    numbers1.insert(iter2 + 1, 5, 4); // вставим пять четверок после второго элемента  // вставить на индекс 2 число  8
    cout << "Inserted five values '4' on position 1: " << endl;
    print_vector(numbers1);

    vector<int> values { 10, 20, 30, 40, 50 };
    vector<int> numbers2 { 1, 2, 3, 4, 5 };
    auto iter3 = numbers2.begin();  // указатель на первый элемент
    numbers2.insert(iter3, values.begin(), values.begin() + 4);
    // ^ вставим 4 элемента из вектора values в начало вектора numbers2 (копирование части одного вектора в другой)
    cout << "Inserted elements of vector value (from 0 to 4) on position 0: " << endl;
    print_vector(numbers2);


    vector<int> numbers3 { 1, 2, 3, 4, 5 };
    auto iter4 = numbers3.begin();
    numbers3.insert(iter4, {21, 22, 23});
    // ^ вставил список значений начиная с позиции pos
    cout << "Inserted list {21, 22, 23} on position 0: " << endl;
    print_vector(numbers3);
}

void delete_elements_from_vector() {
    /** Удаление элементов вектора.
    1. Чтобы удалить вообще все из вектора, можно использовать .clear()
    2. Чтобы удалить последний элемент вектора - .pop_back();
    Удаление из определенных позиций вектора.
    1. erase(p) - удаляет элемент, на который указывает p, при этом
     итератор возвращается на элемент, который стоит следующим после удаленного (или
     на конец вектора, если был удален последний элемент).
    2. erase(begin, end) - удаляет элементы из диапазона begin-end. Возвращает
     итератор на элемент, который стоит следующим после удаленного или на конец
     вектора, если вектор был полностью очищен.
    **/

    vector<int> numbers1 = { 1, 2, 3, 4, 5, 6 };
    auto iter = numbers1.begin();
    numbers1.erase(iter + 2); // удаляем третий элемент
    cout << "Removing third element of vector: " << endl;
    print_vector(numbers1);

    vector<int> numbers2 { 1, 2, 3, 4, 5, 6 };
    auto begin = numbers2.begin();  // указатель на первый элемент
    auto end = numbers2.end();  // указатель на последний элемент
    numbers2.erase(begin + 2, end - 1);  // удалить с третьего до последнего
    cout << "Removing elements from third till the last: " << endl;
    print_vector(numbers2);
}

void reassign_elements_of_vector() {
    vector<string> languages { "C++", "Java", "Python", "Swift", "Go" };

    /** Для переназначения элементов вектора можно использовать:
     1. [] - как в массивах
     2. .at(index) - с указанием индекса элемиента, которых хотим переназначить
     3. assign(quantity, element) - заменяет элементы вектора значением element в количестве quantity
     4. assign({list}) - заменяет все элементы вектора значением из списка (список должен быть той же длины, что и вектор)
    **/

    languages[4] = "JavaScript";
    cout << "Reassigned 4th element: " << endl;
    print_string_vector(languages);

    languages.at(4) = "Objective-C";
    cout << "Reassigned 4th element: " << endl;
    print_string_vector(languages);

    languages.assign(languages.size(), "C++");
    cout << "Reassigned 5 elements to C++ value: " << endl;
    print_string_vector(languages);

    languages.assign({ "C#", "Java", "Python", "Swift", "C++" });
    cout << "Reassigned all elements with list: " << endl;
    print_string_vector(languages);
}

void swapping_vectors() {
    vector<string> clangs { "C++", "C#", "Java" };
    vector<string> ilangs { "Python", "Ruby", "PHP" };

    /** чтобы заменить значения одного вектора на элементы
     * другого вектора, используется функция swap(). учтите, что вектора
     * в случае такого обмена должны быть одинаковой длины. Иначе значения более
     * длинного вектора просто обрежутся по количеству значений короткого **/
    clangs.swap(ilangs);
    cout << "Swapped elements: " << endl;
    print_string_vector(clangs);
}
