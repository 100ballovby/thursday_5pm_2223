#include <iostream>
using namespace std;


int decart() {
    int x, y;
    cout << "Insert x: ";
    cin >> x;
    cout << "Insert y: ";
    cin >> y;

    if (y > 0 && x > 0) {
        cout << 1 << endl;
    }
    else if (x < 0 && y > 0) {
        cout << 2 << endl;
    }
    else if (x < 0 && y < 0) {
        cout << 3 << endl;
    }
    else if (x > 0 && y << 0) {
        cout << 4 << endl;
    }
    else {
        cout << "error" << endl;
    }

    return 0;
}
