#include <iostream>
using namespace std;

int randint(int min, int max) {
    return min + rand() % (max - min);
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

int find_first_otr(int **&matrix, int n, int m) {
    int line_n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < 0) {
                line_n = i;
                return line_n;
            }
        }
    }
    return -1;
}

int hw_task_solution_number_of_line() {
    /** Проверить, есть ли в матрице хотя бы одна строка,
     * содержащая отрицательный элемент, и найти ее номер. Все
     * элементы столбца с таким же номером уменьшить вдвое**/
    srand(time(NULL));
    int n = 4, m = 5;
    int **matrix, num_of_line;
    fill_matrix(matrix, n, m, -5, 20);
    print_matrix(matrix, n, m);
    num_of_line = find_first_otr(matrix, n, m);

    cout << "Find line: " << num_of_line << endl << endl;
    if (num_of_line != -1) {
        for (int i = 0; i < n; i++) {
            matrix[i][num_of_line] /= 2;
        }
        print_matrix(matrix, n, m);
    } else {
        cout << "there is no negatives" << endl;
    }

    return 0;
}



