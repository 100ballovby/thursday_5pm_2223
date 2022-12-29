#include <iostream>
#include <cstring>
using namespace std;

void matrix_char() {
    int matrix[3][4] {
            {0},
            {0},
            {0}
    };
    char matrix_string[3][10] {
            "mama",
            "papa",
            "baba"
    };
    cout << matrix;
    cout << matrix_string;
}

void char_doubled_array() {
    char m_string[4][100];

    for (int i = 0; i < 4; i++) {
        cout << "Insert string:";
        cin.getline(m_string[i], 100);
    }

    // так делать можно, но не надо!
    for (int j = 0; j < 4; j++) {
        for (int k = 0; k < strlen(m_string[j]); k++) {
            cout << m_string[j][k];
        }
        cout << endl;
    }

    // так можно и нужно!
    for (int c = 0; c < 4; c++) {
        cout << m_string[c] << endl;
    }
}

int task_mid_len() {
    int n, m = 100, mid = 0, sum = 0;
    cout << "How many rows?";
    cin >> n;
    cin.get();
    char **m_string = new char *[n];  // создаю динамический массив размером n

    for (int i = 0; i < n; i++) {
        m_string[i] = new char [m];  // создаю строчки динамического массива
        cout << "Insert string:";
        cin.getline(m_string[i], m);
        sum += strlen(m_string[i]);
    }
    mid = sum / n;
    cout << "Middle: " << mid << endl;

    for (int i = 0; i < n; i++) {  // перебираю элементы двумерного массива
        if (strlen(m_string[i]) > mid) {  // если длина строки больше средней
            int lst_i = strlen(m_string[i]);  // фиксирую длину слова в качестве индекса
            while (lst_i >= mid) {  // пока длина строки больше средней
                m_string[i][lst_i] = '\u0000';  //  заменяю каждый символ на null
                lst_i--;  // уменьшаю индекса
            }
        } else if (strlen(m_string[i]) < mid) {
            int lst_i = strlen(m_string[i]);  // фиксирую длину слова в качестве индекса
            while (lst_i <= mid) {
                m_string[i][lst_i] = ' ';
                lst_i++;
            }
        }
        cout << "'" << m_string[i] << "'" << endl;

    }

    for (int i = 0; i < n; i++) {
        m_string[i] = nullptr;
    }
    m_string = nullptr;
    // char a[] = "hello",  a[4] = '\u0000';  <- заменить символ на null

    return 0;
}



