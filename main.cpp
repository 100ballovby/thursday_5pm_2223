#include <iostream>
#include <string>
using namespace std;


int factorial(int n) {
    int f = 1;
    for (int i = n; i > 0; i--) {
        f *= i;
    }
    return f;
}

int factorial1(int n) {
    if (n < 2) {  // базовый случай - момент выхода из функции (завершение работы)
        return 1;
    } else {
        return n * factorial1(n - 1);
    }
}

// возведение в степень
int power(int n, int exp) {
    if (exp < 1) {
        return 1;
    } else {
        return n * power(n, exp - 1);  // повторение вызова совершается до момента, пока exp > 1
    }
}

// посчитать сумму чисел от 1 до n
int summ(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + summ(n - 1);
    }
}

int sum_array(int i, int *a, int size) {  // помимо самого массива, нужно передать итератор для прохода по элементам и размер
    // i - итератор функции (то, что будет проходить по элементам массива)
    // a - массив для обработки
    // size - длина массива
    if (i == size - 1) {  // если итератор дошел до последнего элемента в массиве
        return a[i];  // вернуть элемент из функции
    } else {  // рекурсивный случай работает, пока массив не закончился
        return a[i] + sum_array(i + 1, a, size);
    }
}

// посчитать количество вхождений символа в строке
int countSymbol(char c, string s, int i) {
    if (i == s.length()) {  // если функция дошла до последнего элемента в строке
        return 0;
    } else {  // если не дошли до конца строки, проверяем:
        if (c == s[i]) {  // если символ был найден в строке
            return countSymbol(c, s, i+1) + 1;  // добавить единицу к счетчику
        } else {
            return countSymbol(c, s, i+1);  // иначе переходим к обработке следующего символа
        }
    }
}

int countSolutions(int n, int x=1, int y=1) {
    if (power(x, 2) + power(y, 2) >= n) {  // если сумма квадратов стала больше n
        return 0;  // количество решений 0
    } else {  // если сумма квадратов меньше n
        int count = 1; // уже одно решение есть
        count += countSolutions(n, x+1, y);
        if (x != y) {
            count += countSolutions(n, x, y+1);
        }
        return count;
    }
}

// определить простое число
bool isPrime(int n, int div = 2) {
    // базовый случай №1 - это если число меньше 2, то оно не является простым
    if (n < 2) {
        return false;
    }
    // базовый случай №2 - если число равно 2, то оно простое
    if (n == 2) {
        return true;
    }
    // базовый случай №3 - если число делится нацело на какое-то число до его квадратного корня, оно не простое
    if (div * div > n) {
        return true;
    }
    if (n % div == 0) {
        return false;
    }
    // рекурсивный случай: проверяем, можно ли разделить число на следующее за делителем
    return isPrime(n, div+1);

}

int main() {
    cout << factorial(6) << endl;
    cout << factorial1(6) << endl;
    cout << "2^3 = " << power(2, 3) << endl;
    cout << summ(5) << endl;

    int arr[] { 4, 5, 2, 7, 18, 9, 3 };
    cout << "Сумма элементов массива: " << sum_array(0, arr, 7) << endl;

    cout << countSymbol('e', "Hello, Harry! Where have you been yesterday?", 0) << endl;

    cout << "Solutions for x^2 + y^2 < n: " << countSolutions(8) << endl;

    int n = 7;
    bool res = isPrime(n);
    cout << n << " is " << (res ? "prime" : "not prime") << endl;
    return 0;
}