#include <iostream>
#include <vector>
#include <iterator>   // если не работает begin() и end()
#include <string>
using namespace std;


void vector_begin() {
    vector<int> array;  // объявление целочисленного вектора без указания длины (не надо указывать)
    // используем список инициализаторов для инициализации вектора (массива)
    vector<int> array2 = {0, 1, 2, 3, 4, 5, 6, 7};
    // использует uniform-инициализацию для инициализации вектора (массива)
    vector<int> array3 {10, 8, 6, 4, 2, 1};  // c++ 11

    cout << "7th element of array2: " << array2[6] << endl; // для обращения к элементам можно использовать синтаксис массивов
    cout << "2nd element of array3: " << array3.at(1) << endl; // для обращения к элементам можно использовать функцию at
    /* Если вы будете запрашивать элемент, который находится вне диапазона (вне размера) вектора,
     * расширяться он не будет (получится ошибка out_of_range) */
    cout << "10th element of array3: " << array3.at(9) << endl;
}

void do_smth(bool value) {
    int *array = new int[7] {12, 10, 8, 6, 4, 2, 1};
    if (value) {
        return;
    }

    delete[] array;  // если value == true, то этот стейтмент никогда не выполнится (память останется зарезервированной)
    /* Если бы вместо обычного динамического массива был вектор, то подобное никогда не произошло бы,
     * потому что вектора самостоятельно управляют выделенной памятью и как только функция завершит свою
     * работу (вектор выйдет из области видимости), вектор будет удален из памяти автоматически. */
}

void vector_resizing() {
    vector<int> array3 {10, 8, 6, 4, 2, 1};  // c++ 11

    cout << "The length of array3 is: " << array3.size() << endl;
    // чтобы изменить длину вектора, нужно
    array3.resize(10);  // расширил вектор ДО 10 элементов
    cout << "The length of array3 is: " << array3.size() << endl;

    // чтобы перебрать вектор, можно использовать foreach или классический for
    for (auto &element : array3) {
        cout << element << ' ';
    }

    // вектор можно обрезать
    array3.resize(3);
    cout << "\nThe length of array3 is: " << array3.size() << endl;
    // в случае с векторами делать это не обязательно, потому что они сами умеют расширяться без использования resize
    for (auto &element : array3) {
        cout << element << ' ';
    }
}

void iterators() {
    vector<int> array3 {10, 8, 6, 4, 2, 1};  // c++ 11

    auto begin { &array3[0] };  // фиксирую начало вектора как первый его элемент
    auto end { begin + size(array3) };  // обратите внимание, что мы указываем на место, следующее за последним элементом

    // Цикл for с использованием указателя
    // for (auto (int) i  = 0; i < array3.size(); i++)
    for (auto ptr = begin ; ptr != end; ptr++) {
        cout << *ptr << ' ';
    }
}

void iterators_included() {
    vector<int> array3 {10, 8, 6, 4, 2, 1};  // c++ 11

    auto begin { array3.begin() };  // фиксирую начало вектора с помощью встроенного итератора begin()
    auto end { array3.end() };

    // Цикл for с использованием указателя
    // for (auto (int) i  = 0; i < array3.size(); i++)
    for (auto ptr = begin ; ptr != end; ptr++) {
        cout << *ptr << ' ';
    }
}

void fill_vector() {
    vector<string> fridge;

    string buffer = "";
    cout << "Insert fruits names. Press Enter to quit." << endl;

    do {
        getline(cin, buffer);
        if (buffer.size() > 0) {
            fridge.push_back(buffer);
            // метод вектора, который позволяет вставить значение в конец вектора
        }
    } while (buffer != "");

    auto begin = fridge.begin();
    auto end = fridge.end();

    for (auto ptr = begin; ptr != end; ptr++) {
        cout << *ptr << ", ";
    }
}