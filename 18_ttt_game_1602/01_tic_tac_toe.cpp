#include <iostream>
#include <string>
using namespace std;

int randint(int min, int max) {
    return min + rand() % (max - min);
}

string weekday_if(int day) {
    string ans;
    if (day == 1) {
        ans = "Monday";
    } else if (day == 2) {
        ans = "Tuesday";
    } else if (day == 3) {
        ans = "Wednesday";
    } else if (day == 4) {
        ans = "Thursday";
    } else if (day == 5) {
        ans = "Friday";
    } else if (day == 6) {
        ans = "Saturday";
    } else if (day == 7) {
        ans = "Sunday";
    } else {
        ans = "Incorrect number";
    }
    return ans;
}

string weekday_switch(int day) {
    string ans;
    switch (day) {
        case 1: ans = "Monday"; break;  // if (day == 1) {ans = "monday"};
        case 2: ans = "Tuesday"; break;
        case 3: ans = "Wednesday"; break;
        case 4: ans = "Thursday"; break;
        case 5: ans = "Friday"; break;
        case 6: ans = "Saturday"; break;
        case 7: ans = "Sunday"; break;
        default: ans = "Incorrect number"; break;  // если ни один из кейсов не прошел
    }
    return ans;
}

int switch_theory_main() {
    srand(time(NULL));
    cout << weekday_if(2) << endl;
    cout << weekday_switch(2) << endl;

    return 0;
}