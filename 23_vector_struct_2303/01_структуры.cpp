#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Person {
    unsigned age;
    string name;
};

int zapuskai_menya() {
    Person tom;
    tom.name = "Tom";
    tom.age = 37;

    cout << tom.name << "\t" << tom.age << "\n";

    Person anny {23, "Anny"};  // инициализация структуры

    // в векторе можно сохранять структуры
    vector<Person> peoples;  // вектор основан на типе данных Person
    peoples.push_back({23, "Anny"});
    peoples.push_back({25, "Peter"});
    peoples.push_back({27, "John"});
    peoples.push_back({20, "Danny"});

    for (auto it = peoples.begin(); it != peoples.end(); it++) {
        if (it->name[0] == 'A') {  // Если первая буква имени в структуре - А
            cout << it->age << " " << it->name << endl;  // нельзя выводить структуру напрямую, можно обращаться через поля
        }
    }



    return 0;
}
