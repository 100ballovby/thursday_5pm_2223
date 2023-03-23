#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Student {
    string name;
    string address;
    string group;
    double rate;
};

void inputStudent(vector<Student> &studs);
int searchStudent(vector<Student> &studs, string name);

int main() {
    vector<Student> students;


    return 0;
}

void inputStudent(vector<Student> &studs) {
    Student *student = new Student;
    cout << "Name: ";
    getline(cin, student->name);
    cout << "Address: ";
    getline(cin, student->address);
    cout << "Group: ";
    getline(cin, student->group);
    cout << "Rate: ";
    cin >> student->rate;

    studs.push_back(*student);
}

int searchStudent(vector<Student> &studs, string name) {
    int index = 0;
    bool found = false;
    for (auto it = studs.begin(); it != studs.end(); it++) {
        if (it->name == name) {
            found = true;
            break;
        }
        index++;
    }

    if (!found) {
        return -1;
    } else {
        return index;
    }
}
