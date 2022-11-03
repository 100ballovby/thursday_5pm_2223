#include <iostream>

using namespace std;

int randint(int min, int max) {
    /** Функция будет генерировать случайные числа
     * в диапазоне min-max **/
    return rand() % (max - min) + min;  // эту формулу просто нужно запомнить
}

int main() {

    return 0;
}
