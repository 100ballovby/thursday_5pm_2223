#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string to_binary(int n) {
    string bin = "";  // здесь храним двоичное число
    while (n > 0) {  // пока полученный аргумент не станет 0
        bin = char('0' + n % 2) + bin;
        /* Когда пишем += -> bin = bin + что_то. Символы вставляются в прямом следовании
         * Когда пишем bin = что-то + bin. Символы вставляются в обратном порядке */
        n /= 2;  // делю число на 2
    }
    return bin;

}

int to_decimal(string bin_n) {
    int dec = 0;
    int len = bin_n.length();
    for (int i = 0; i < len; i++) {
        if (bin_n[len - 1 - i] != '0') {
            dec += pow(2, i);
        }
    }
    return dec;
}

void eto_main() {
    int number;
    cout << "Insert num: ";
    cin >> number;
    string binary_num = to_binary(number);
    cout << number << " in binary format is: " << binary_num << endl;
    int decimal_num = to_decimal(binary_num);
    cout << binary_num << " in decimal format is " << decimal_num << endl;
}



