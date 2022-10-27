#include <iostream>
using namespace std;

void task_1() {
    /*
    Easy: Задание N1
    Напишите программу, которая запрашивает у пользователя номер месяца и затем выводит соответствующее название времени года. В случае, если пользователь введет недопустимое число, программа должна вывести сообщение об ошибке.
            Пример результата выполнения программы:
    Введите номер месяца (число от 1 до 12): 12
    Зима */

    int month;
    cout << "Insert month number:";
    cin >> month;

    if (month == 1 || month == 2 || month == 12) {
        cout << "winter" << endl;
    }
    else if (month == 3 || month == 4 || month == 5) {
        cout << "spring" << endl;
    }
    else if (month == 6 || month == 7 || month == 8) {
        cout << "summer" << endl;
    }
    else if (month == 9 || month == 10 || month == 11) {
        cout << "autunm" << endl;
    }
    else {
        cout << "incorrect number" << endl;
    }
}

void task_2() {
    /*
    Easy: Задание N2
    Напишите программу вычисления стоимости поездки на автомобиле на дачу (туда и обратно). Исходными данными являются:
    * расстояние до дачи (в км);
    * литраж бензина, который потребляет автомобиль на 100 км пробега;
    * цена одного литра бензина.

            Пример результата выполнения программы:

    Расстояние до дачи (км): 67
    Расход бензина (литров на 100 км пробега): 8.5
    Цена литра бензина (руб.): 2.6
    Поездка на дачу и обратно обойдется в 14.8 руб. */
    double path, price, litres;
    cout << "Path length: ";
    cin >> path;
    cout << "Petrol cost: ";
    cin >> price;
    cout << "How much litres per km: ";
    cin >> litres;

    double result = (path / 100 * litres * price) * 2;
    cout << "Cost will be: " << result << endl;
}

void task_3() {
    /*
    Medium: Задание N3
    Напишите программу вычисления стоимости покупки с
     учетом скидки. Скидка в 3% предоставляется, если сумма
     покупки больше 500 руб., в 5% — если сумма покупки больше 1000 руб. */
    double price;
    cout << "Insert price: ";
    cin >> price;

    if (price >= 500 && price < 1000) {
        double discount = price * 0.03;
        cout << "Discount: " << discount << endl;
        cout << "Price: " << price - discount << endl;
    }
    else if (price >= 1000) {
        double discount = price * 0.05;
        cout << "Discount: " << discount << endl;
        cout << "Price: " << price - discount << endl;
    }
    else {
        cout << "You cannot use discout." << endl;
        cout << "Price: " << price << endl;
    }
}