#include <iostream>
using namespace std;

struct Employee {  // определение структуры
    short id;
    int age;
    double salary = 600;  // поля по умолчанию должны находиться в конце
};

void struct_basics() {
    Employee john;  // объявил переменную типа Employee
    // когда вы создаете переменную по структуре, под нее уже выделяется память
    john.id = 1;
    john.age = 35;
    john.salary = 789.9;

    Employee bill;
    bill.id = 2;
    bill.age = 37;
    bill.salary = 890.2;

    cout << "John makes $" << john.salary << " per month" << endl;
    cout << "Bill makes $" << bill.salary << " per month" << endl;

    if (john.salary > bill.salary) {
        cout << "John makes more money than Bill" << endl;
    } else {
        cout << "Bill makes more money than John" << endl;
    }

    john.salary += 200;
    cout << "John makes $" << john.salary << " per month" << endl;

    cout << "It's Bill birthday!" << endl;
    bill.age++;
    cout << "Bill is " << bill.age << " years old" << endl;
}
void struct_initialisation() {
    Employee john = {1, 35, 678.23};  // инициализация структуры
    Employee bill = {2, 36, 789.12};  // id = 2, age = 36, salary = 789.12
    // значения при инициализации нужно передавать в том же порядке, в котором
    // они заданы в структуре

    cout << "John makes $" << john.salary << " per month" << endl;
    cout << "Bill makes $" << bill.salary << " per month" << endl;

    if (john.salary > bill.salary) {
        cout << "John makes more money than Bill" << endl;
    } else {
        cout << "Bill makes more money than John" << endl;
    }

    john.salary += 200;
    cout << "John makes $" << john.salary << " per month" << endl;

    cout << "It's Bill birthday!" << endl;
    bill.age++;
    cout << "Bill is " << bill.age << " years old" << endl;
}
void struct_default_values() {
    Employee john = {1, 35, 678.23};  // инициализация структуры
    Employee bill = {2, 36};  // id = 2, age = 36, salary = 600
    /* Когда значение поля в структуре задано по умолчанию,
     * при инициализации его можно не указывать. НО
     * когда вы ставите значение по умолчанию, поле с этим значением
     * должно находиться ПОСЛЕ всех полей, которым значение не задано. */

    cout << "John makes $" << john.salary << " per month" << endl;
    cout << "Bill makes $" << bill.salary << " per month" << endl;

    if (john.salary > bill.salary) {
        cout << "John makes more money than Bill" << endl;
    } else {
        cout << "Bill makes more money than John" << endl;
    }

    john.salary += 200;
    cout << "John makes $" << john.salary << " per month" << endl;

    cout << "It's Bill birthday!" << endl;
    bill.age++;
    cout << "Bill is " << bill.age << " years old" << endl;
}

int main() {
    const int size = 4;
    Employee employees[size];  // создаю массив на основе структуры

    for (int i = 0; i < size; i++) {
        cout << "Employee's id: ";
        cin >> employees[i].id;

        cout << "Employee's age: ";
        cin >> employees[i].age;

        cout << "Employee's salary: ";
        cin >> employees[i].salary;
    }
    /* TODO: Напишите программу, которая найдет и выведет
     * id работника с самой высокой зарплатой */
    cout << employees[0].id << endl; // вывести id первого элемента массива работников
    return 0;
}



