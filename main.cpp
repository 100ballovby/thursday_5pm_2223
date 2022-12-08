#include <iostream>
using namespace std;

void lab_str_task1() {
    /**Составить программу, которая во вводим
     * с клавиатуры слове меняет местами первую
     * и последнюю буквы. Новое слово необходимо
     * вывести на экран. **/
    string word = "hello ";
    char first_letter = word[0];
    int len = word.size();
    char last_letter = word[len - 1];
    if (last_letter == ' ') {
        last_letter = word[len - 2];
    }
    string s1 = word;
    word[0] = last_letter;
    word[len - 2] = s1[0];

    cout << word << endl;
}

void lab_str_task2() {
    /** Составить программу, которая во вводимой с клавиатуры строке удаляет
     * n элементов, начиная с k-го элемента. Где n и k —  вводимые с
     * клавиатуры числа целого типа. Преобразованную строку вывести на экран.  **/
    string phrase;
    cout << "Insert smth: ";
    getline(cin, phrase);

    int n, k;
    cout << "How many elements:";
    cin >> n;
    cout << "From which element: ";
    cin >> k;

    /* Для удаления из строки используется метод
     * erase(pos, count) - pos - с какого элемента удалить, count - сколько */
    phrase.erase(k, n);  // удалить n элементов с индекса k
    cout << phrase << endl;
}

void lab_str_task3() {
    /** Ввести с клавиатуры строку. После каждого символа 'a'
     * вставить пробел. Преобразованную строку вывести на экран. **/
    string phrase, s1;
    // создадим переменную, в которую скопируем
    // все символы из оригинальной строки
    cout << "Insert smth: ";
    getline(cin, phrase);

    /* Чтобы решить задачу, мы скопируем каждый символ из
     * строки phrase в строку s1 и если символ в строке phrase
     * - это буква а, то добавим пробел после нее. */

    for (int i = 0; i < phrase.size(); i++) {
        s1 += phrase[i];
        if (phrase[i] == 'a') {
            s1 += ' ';
        }
    }
    cout << s1 << endl;
}

void lab_str_task5() {
    /** Удалить из строки все символы '+'.
     * Преобразованную строку вывести на экран. **/
    string phrase, s1;
    cout << "Insert smth:";
    getline(cin, phrase);
    /* Чтобы решить задачу, мы скопируем каждый символ из
     * строки phrase в строку s1, при условии, что этот символ
     * не является пробелом. */
    for (int i = 0; i < phrase.size(); i++) {
        if (phrase[i] != '+') {
            s1 += phrase[i];
        }
    }
    cout << s1 << endl;
}

int main() {
    string phrase, s1;
    cout << "Insert smth:";
    getline(cin, phrase);

    return 0;
}



