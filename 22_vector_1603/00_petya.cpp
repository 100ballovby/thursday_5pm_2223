#include <iostream>
#include <vector>
using namespace std;

void zadacha_petya() {
    int maximum = 0, minimum = 0, sum = 0, mult = 1;
    vector<int> nums {4, 5, 12, 0, 43, 4, 2, 19, 32, -2, 5};
    auto start { nums.begin() };
    auto end { nums.end() };
    for (auto ptr = start; ptr != end; ptr++) {
        if (*ptr > maximum) {
            maximum = *ptr;
        }
        if (*ptr < minimum) {
            minimum = *ptr;
        }
        if (*ptr > 0) {
            sum += *ptr;
        }
    }

    cout << "Max: " << maximum << endl;
    cout << "Min: " << minimum << endl;
    cout << "Sum: " << sum << endl;

    // чтобы найти индекс определенного элемента в векторе (при условии его наличия) используем:
    auto i_max = find(nums.begin(), nums.end(), maximum);
    auto i_min = find(nums.begin(), nums.end(), minimum);

    cout << "Max index: " << i_max - nums.begin() << endl;
    cout << "Min index: " << i_min - nums.begin() << endl;

    // чтобы получить ИНДЕКС найденного элемента, отнимите от значения функции find начало вектора
    int s_l = i_max - nums.begin();
    int f_l = i_min - nums.begin();

    // цикл выбирает, с какого индекса ему начинать на основе работы функций max и min
    for (int i = min(s_l, f_l); i < max(s_l, f_l); i++) {
        mult *= nums[i];
    }
    cout << "Multiplication: " << mult << endl;
}