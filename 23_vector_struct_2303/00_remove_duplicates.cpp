#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void remove(vector<int> &v);
void remove_duplicate(vector<int> &v);
void show_vector(vector<int> &v);

int glvaniy_func() {
    vector<int> nums { 4, 2, 6, 3, 5, 4, 90, 32, 15, 2, 65, 13, 5 };

    remove_duplicate(nums);
    show_vector(nums);
    return 0;
}

void remove(vector<int> &v) {
    auto end = v.end();
    for (auto it = v.begin(); it != end; it++) {
        end = remove(it + 1, end, *it);
    }
    v.erase(end, v.end());
}

void show_vector(vector<int> &v) {
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

void remove_duplicate(vector<int> &v) {
    // отсортируем вектор
    sort(v.begin(), v.end());

    // убираем дубликаты
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
}
