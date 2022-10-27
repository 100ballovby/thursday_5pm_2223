#include <iostream>
using namespace std;

void for_loop() {
    /*
     for (объявление счетчика; "количество повторений"; инкремент/декремент счетчика ) {
        тело цикла (действия для повторения )
     }
     */
    for (int i = 0; i < 3; i += 1) {  // цикл на 3 повторения
        cout << "i = " << i << " Hello!" << endl;
    }
    // cout << i << endl;  <- вывести значение i можно ТОЛЬКО внутри цикла for
}

void for_loop_variable() {
    /* Напишите программу, которая запросит у пользователя количество повторений
     * цикла и выведет число, введенное пользователем, умноженное на значение
     * счетчика цикла. */
    int number, counter;
    cout << "Insert number: ";
    cin >> number;
    cout << "Insert counter boundary: ";
    cin >> counter;
    for (int iteration = 0; iteration < counter; iteration += 1) {
        cout << iteration << " * " << counter << " = " << iteration * counter << endl;
    }
}

void task_loop() {
    // Напишите программу, которая будет
    // считать от 1 до 10, а после 10 напишет
    // "Поздравляю!".
    for (int i = 1; i <= 10; i += 1) {
        cout << i << endl;
    }
    cout << "Congratulations!" << endl;
}
