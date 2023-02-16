#include <iostream>
using namespace std;

int randint(int start, int end) {
    int num = start + rand() % (end - start + 1); // если не будет +1, то конец промежутка не будет включен
    return num;
}

void fill_matrix(int **array, int lines) {
    for (int i = 0; i < lines; i++) {
        array[i] = new int [lines];
        for (int j = 0; j < lines; j++) {
            array[i][j] = randint(-10, 100);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void task_1(int **array, int lines) {
    /**Дана целочисленная квадратная матрица. Определить
     * произведение элементов в тех строках, которые не содержат
     * отрицательных элементов**/
    long mult = 1;
    bool isNegative = false;  // флаг, указывающий, есть ли в строке отрицательные элементы
    for (int i = 0; i < lines; i++) {
        isNegative = false;  // по умолчанию в строке НЕТ отрицательных
        for (int j = 0; j < lines; j++) { // просматриваем все элементы матрицы
            if (array[i][j] <= 0) {  // если наши отрицательный
                isNegative = true;  // переключить флаг
                break;  // дальше строку не смотрим
            }
        }
        if (!isNegative) {  // если в строке не было найдено ни одного отрицательного
            for (int j = 0; j < lines; j++) {  // проходимся по элементам матрицы
                mult *= array[i][j];
            }
            cout << "Line " << i << ", mult: " << mult << endl;
            mult = 1;
        }
    }
}


void task_2(int **array, int lines) {
    /**Найти в матрице первую строку, все
     * элементы которой положительны, и
     * сумму этих элементов. Уменьшить
     * все элементы матрицы на эту сумму.
    **/
    int sum = 0;
    bool is_negative = false;  // флаг для определения отрицательных элементов
    bool is_any_match = false;  // есть хотя бы одна строка

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            if (array[i][j] < 0) {
                is_negative = true;
                break;
            }
        }
        if (!is_negative && !is_any_match) {
            for (int j = 0; j < lines; j++) {
                sum += array[i][j];
            }
            is_any_match = true;  // как только нашли первую строку с положительными
            break;  // перестаем трогать строки
        }
    }

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < lines; j++) {
            array[i][j] -= sum;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int menya_zapuskat() {
    srand(time(NULL));
    int n;
    cout << "N: ";
    cin >> n;

    int **matrix = new int *[n];
    fill_matrix(matrix, n);
    task_2(matrix, n);
    return 0;
}



