#include <iostream>
using namespace std;

int randint(int min, int max) {
    return min + rand() % (max - min);
}

void fill_array(int *arr, int size, int start, int stop) {
    for (int i = 0; i < size; i++) {
        arr[i] = randint(start, stop);
    }
}

void print_array(int *arr, int size) {
    // при работе с массивами желательно, чтобы они передавались как ссылка
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int find_max(int *arr, int size) {
    int i_max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[i_max]) {
            i_max = i;
        }
    }
    return i_max;
}

void fill_matrix(int **&matrix, int n, int m, int start, int stop) {
    // при работе с матрицами ставим два разыменовывания, потому что
    // в матрице есть вложенные массивы
    matrix = new int *[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int [m];
        for (int j = 0; j < m; j++) {
            matrix[i][j] = randint(start, stop);
        }
    }
}

void print_matrix(int **&matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int count_odd(int **&matrix, int n, int m) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2 != 0) {  // если остаток от деления элемента i,j на 2 не равен 0
                counter++;  // считаем элемент
            }
        }
    }
    return counter;
}

int sum_all(int **&matrix, int n, int m) {
    int summ = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            summ += matrix[i][j];
        }
    }
    return summ;
}

int find_max_sum(int **&matrix, int n, int m) {
    int *lines = new int [n];  // количество сумм будет равно количеству строк матрицы

    for (int i = 0; i < n; i++) {  // перебор всех строк матрицы
        int summ = 0;  // с каждой новой строкой сумма обнуляется
        for (int j = 0; j < m; j++) {  // считаю сумму строки здесь
            summ += matrix[i][j];
        }
        lines[i] = summ;  // сумму строки записываю под индексом i
    }

    // чтобы найти максимальную сумму, нужно пройти по массиву
    // с суммами элементов строк и определить наибольшее значение.
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (lines[i] > lines[max]) {
            max = i;
        }
    }
    return max;
}

int функция_main() {
    srand(time(NULL));
    int size = 10, n = 4, m = 5;
    int array[size], **matrix;
    fill_array(array, size, -10, 10);
    print_array(array, size);
    cout << "Max element is: " << array[find_max(array, size)] << endl;
    cout << "Index of max is: " << find_max(array, size) << endl;

    fill_matrix(matrix, n, m, 0, 20);
    print_matrix(matrix, n, m);
    cout << "Quantity of odd elements: " << count_odd(matrix, n, m) << endl;
    cout << "Summ of all elements: " << sum_all(matrix, n, m) << endl;

    cout << "Index of line with max summ: " << find_max_sum(matrix, n, m) << endl;
    return 0;
}



