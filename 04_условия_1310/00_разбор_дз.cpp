#include <iostream>
using namespace std;

int power_a4(int a) {
    int a2 = a * a;  // квадрат числа а
    int a4 = a2 * a2;
    return a4;
}

int power_a6(int a) {
    int a2 = a * a;  // квадрат числа а
    int a4 = a2 * a2;
    int a6 = a4 * a2;
    return a6;
}

int power_a15(int a) {
    int a2 = a * a;  // квадрат числа а
    int a3 = a2 * a;
    int a6 = a3 * a3;
    int a12 = a6 * a6;
    int a15 = a12 * a3;
    return a15;
}
