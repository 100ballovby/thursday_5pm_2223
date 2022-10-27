#include <iostream>
using namespace std;

void arrays_basics() {
    int marks[5];  // объявил целочисленный фиксированный массив на 10 элементов
    marks[0] = 8;  // на место первого элемента массива (индекс 0) ставлю 8
    marks[1] = 9;
    marks[2] = 10;
    marks[3] = 5;
    marks[4] = 6;
    cout << marks[3] << endl;
    cout << "Sum of the first 3 numbers is: " << marks[0] + marks[1] + marks[2] << endl;
}

void arrays_fixed() {
    const int length = 7;  // Объявил длинну массива как константу
    double scores[length] ;  // объявил массив фиксированный длины, которая представлена константой
}

void arrays_length() {
    // длину массива при инициализации можно не указывать, потому что она будет посчитана автоматически при компиляции
    double scores[] = {2.54,5.23, 1.71,
                       0.98, 3.23, 5.156,
                       0.127};  // инициализировал массив
    cout << scores[0] << endl;
    cout << scores[2] << endl;
    cout << scores[5] << endl;
}

void arrays_enumerations() {
    /* ВЫ можете неявно связывать массив и перечисление.
 * При такой связи не обязательно указывать целочисленные индесы при обращении
 * к элементам массива. Достаточно просто указать переменную из перечисления */
    enum StudentsNames {
        DAVID,  // 0
        JOHN,
        JULIA,
        ALEX,
        ALICE,
        MICHAEL,
        ANDREW // 6
    };  // создал перечисление, которое по размеру сопоставимо с массивом
    // длину массива при инициализации можно не указывать, потому что она будет посчитана автоматически при компиляции
    double scores[] = {2.54,5.23, 1.71,
                       0.98, 3.23, 5.156,
                       0.127};  // инициализировал массив
    cout << scores[ANDREW] << endl;  // вместо индексов можно обращаться через имена студентов
    cout << scores[JULIA] << endl;
    cout << scores[DAVID] << endl;
    cout << scores[0] << endl;  // по индексам тем не менее все еще можно обращаться
}

void count_elements() {
    enum StudentsNames {
        DAVID,  // 0
        JOHN,
        JULIA,
        ALEX,
        ALICE,
        MICHAEL,
        ANDREW // 6
    };
    double scores[] = {2.54,5.23, 1.71,
                       0.98, 3.23, 5.156,
                       0.127};
    // оператор sizeof() - он определяет количество байтов информации, которое занимает какой-то объект
    cout << "Size of array in bytes: " << sizeof(scores) << endl;
    // Чтобы узнать длину массива в элементах, нужно разделить размер массива на размер любого его элемента
    cout << "Length of array: " << sizeof(scores) / sizeof(scores[0]) << endl;
    // этот фокус работает только в том случае, если вы имеете дело с фиксированным массивом
}