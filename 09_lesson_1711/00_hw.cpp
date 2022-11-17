#include <iostream>
using namespace std;

void squares_hw() {
    int n, i = 1;
    cin >> n;
    while (i*i <= n) {
        cout << i * i << " ";
        i++;
    }
}

void md_hw() {
    int n, count = 2;
    cin >> n;
    while (count <= n) {
        count++;
        if (n % count == 0) {
            cout << count << endl;
            break;
        }
    }
}

int randint(int min, int max) {
    /** Функция будет генерировать случайные числа
     * в диапазоне min-max **/
    return rand() % (max - min) + min;  // эту формулу просто нужно запомнить
}

int guess_number() {
    srand(time(0));
    int guess, secret, attempts;
    secret = randint(1, 100);
    attempts = 1;
    cout << "Загадано число от 1 до 100, угадай его.";
    cin >> guess;

    while (guess != secret && attempts < 7) {
        if (guess < secret) {
            cout << "Мое число больше!" << endl;
        }
        else if (guess > secret) {
            cout << "Мое число меньше!" << endl;
        }
        cout << "Число: ";
        cin >> guess;
        attempts++;
    }

    if (guess == secret) {
        cout << "Молодец! Количество попыток: " << attempts << endl;
    } else {
        cout << "Неправильно! Я загадал число " << secret << endl;
    }
}