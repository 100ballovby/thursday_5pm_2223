#include <iostream>
#include <cstring>  // только для Windows
using namespace std;

void char_basics() {
    char symb = 27;  // создал переменную типа char
    cout << symb << endl;

    for (int i = 0; i < 33; i++) {
        char s = i;
        cout << "Symbol " << i << " is " << s << endl;
    }

    char ch1('F');  // неявное присваивание символа F переменной ch1
    char ch2(49);  // неявноое присваивание символа 1 переменной ch2
    char ch3(5);  // число без кавычек - присвоить КОД из ASCII
    char ch4('5');  // число в кавычках - присвоить СИМОЛ из ASCII
}

void char_static_cast() {
    // необходимо вывести по коду символа его значение (то, как он выглядит)
    unsigned char symb('T');  // беззнаковый тип char
    /* Чтобы работать с char используйте беззнаковый тип - unsigned char */

    // вариант 1 - сделать переменную типа int и присвоить ей значение symb
    int i(symb);  // делать можно, но по правилам языка нежелательно
    // Clang-Tidy: 'signed char' to 'int' conversion; consider casting to 'unsigned char' first.
    cout << i << endl;

    // вариант 2 - преобразование char в int с помощью static_cast
    // static_cast<новый_тип_данных> (ПЕРЕМЕННАЯ_для_преобразования)
    cout << static_cast<int> (symb) << endl;  // преобразовываю symb в int
    cout << symb << endl;  // преобразование на переменную влияния не оказывает, она останется char

    /* static_cast почти не использует память, потому что
     * ему не нужно место под переменную, в которую будет
     * записан символ для преобразования (как в первом случае) */
}

void transition() {
    unsigned char symb;
    cout << "Insert symbol: ";
    cin >> symb;
    cout << "You wrote: " << symb << endl;
    cout << "In ASCII: " << static_cast<int> (symb) << endl;

    unsigned int n;
    cout << "Insert number between 0 and 127: ";
    cin >> n;

    if (n >= 0 && n <= 127) {
        cout << static_cast<char>(n) << endl;
    } else {
        cout << "Error!";
    }
}

void char_arrays() {
    // char arr[] {'h', 'e', 'l', 'l', 'o'};  создание массива char
    char arr[10] ("hello");  // можно инициализировать так
    // массивы типа char можно выводить
    cout << arr << endl;
    // есть функция для получения размера символьного массива
    cout << "Длина слова: " << strlen(arr) << endl;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == '\u0000') {  // если символ в строке - это  
            cout << "Символа нет!" << endl;
        } else {
            cout << arr[i] << endl;
        }
    }  /* будут выведены nul в конце строки, потому что
    строка 10 символов, но так как там нет достаточного
    количества символов, они будут заменены на nul */
}

void strcpy_strcat() {
    // char arr[] {'h', 'e', 'l', 'l', 'o'};  создание массива char
    char arr[10] ("hello");
    char str1[10];
    cout << arr << endl;
    cout << "Длина слова: " << strlen(arr) << endl;

    // строки можно копировать - strcpy(s1, s2) или strncpy(s1, s2, n)
    strcpy(str1, arr);  // скопировать все из arr в str1
    cout << str1 << endl;
    char str3[10];
    strncpy(str3, str1, 2);  // скопировать 2 символа из arr в str1
    cout << str3 << endl;

    char s1[30] ("I am ");
    char s2[] ("programmer on the C++!!");
    // чтобы объединить строки, используем конкатенацию - strcat()
    cout << strcat(s1, s2) << endl;  // объединить строки s1 и s2
}

void special_functions () {
    char symbol('d');  // буква
    char digit('4');  // цифра
    char space(' ');  // пробел
    char character('#');  // значок

    cout << symbol << " - is it symbol?: ";
    isalpha(symbol) ? cout << "true\n" : cout << "false\n";  // проверяет, что символ является буквой
    /* Тернарный оператор - это как условие, только в оодну строку
     2 + 3 == 5 ? cout << "yes" : cout << "no";
     if (2 + 3 == 5) {
        cout << "yes";
     } else {
        cout << "no";
       }
     * */
    cout << digit << " - is it digit?: ";
    isdigit(digit) ? cout << "true\n" : cout << "false\n";  // проверяет, что символ является числом
    cout << space << " - is it space?: ";
    isspace(space) ? cout << "true\n" : cout << "false\n";  // проверяет, что символ является пробелом
    cout << character << " - is it character?: ";
    ispunct(character) ? cout << "true\n" : cout << "false\n";  // проверяет, что символ является знаком препинания
}