#include <iostream>
using namespace std;

struct Person {
    string name;
    string passport_num;
    int age;
};

struct Sotrudnik {
    Person employee; // Person - это структура внутри сруктуры Sotrudnik
    double salary;
};

int main() {
    Sotrudnik bill = {{"Bill", "MP231323", 45}, 456.12};
    cout << bill.salary << endl;
    // чтобы обратиться к вложенной структуре, обращаемся через вложенную структуру
    cout << bill.employee.name << endl;
    return 0;
}



