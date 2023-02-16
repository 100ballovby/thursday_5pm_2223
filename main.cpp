#include <iostream>
#include <string>
using namespace std;

void draw_board(char array[3][3]) {
    cout << "PLAYER 1 - [X]\t\t PLAYER 2 - [0]\n\n";
    cout << "\t\t      |     |      \n";
    cout << "\t\t   " << array[0][0] << "  |  " << array[0][1] << "  |  " << array[0][2] << "  \n";
    cout << "\t\t______|_____|______\n";
    cout << "\t\t   " << array[1][0] << "  |  " << array[1][1] << "  |  " << array[1][2] << "  \n";
    cout << "\t\t______|_____|______\n";
    cout << "\t\t   " << array[2][0] << "  |  " << array[2][1] << "  |  " << array[2][2] << "  \n";
    cout << "\t\t      |     |      \n";
}

void player_turn(char *turn, char array[3][3]) {
    // выводим, какой игрок делает ход
    switch (*turn) {
        case 'X': cout << "\nPlayer - 1 [X] turn: "; break;
        default: cout << "\nPlayer - 2 [0] turn: "; break;
    }
    int choice_cell, row, col;
    cin >> choice_cell;

    switch (choice_cell) {  // в этом свитче мы выбираем, на какое место поставить крестик или нолик
        case 1: row = 0; col = 0; break;
        case 2: row = 0; col = 1; break;
        case 3: row = 0; col = 2; break;
        case 4: row = 1; col = 0; break;
        case 5: row = 1; col = 1; break;
        case 6: row = 1; col = 2; break;
        case 7: row = 2; col = 0; break;
        case 8: row = 2; col = 1; break;
        case 9: row = 2; col = 2; break;
        default: cout << "Invalid move\n";
    }

    // проверяем корректность ввода и заменяем символ на доске
    if (*turn == 'X' && array[row][col] != 'X' && array[row][col] != '0') {  // если на месте выбранной ячейки не находится крестик или нолик
        array[row][col] = 'X';  // поставить на это место крестик
        *turn = '0';  // следующий ход - 0
    } else if (*turn == '0' && array[row][col] != 'X' && array[row][col] != '0') {
        array[row][col] = '0';  // поставить на это место крестик
        *turn = 'X';  // следующий ход - 0
    } else {
        cout << "Cell is already filled! Choose another!\n\n";
        player_turn(turn, array);  // заново даем пользователю возможность выбрать ячейку
    }
    draw_board(array);
}

bool game_over(bool *could_draw, char array[3][3]) {
    // проверим, что в строках и столбцах нет одинаковых символов
    for (int  i = 0; i < 3; i++) {
        if ((array[i][0] == array[i][1] && array[i][0] == array[i][2]) ||  // если в строках совпадают символы
            (array[0][i] == array[1][i] && array[0][i] == array[2][i])) {  // если в столбцах совпадают символы
            return false;
        }
    }
    // проверим, что в диагоналях нет одинаковых символов
    if ((array[0][0] == array[1][1] && array[0][0] == array[2][2]) ||  // если на главной диагонали совпадают символы
        array[0][2] == array[1][1] && array[0][2] == array[2][0]) {  // если на побочной диагонали совпадают символы
        return false;
    }

    // проверим, есть ли еще свободные места для фигур на доске
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (array[i][j] != 'X' && array[i][j] != '0') {  // если в каком-то месте доски нет крестика или нолика
                return true; // играть можно
            }
        }
    }
    *could_draw = true;  // разрешаем рисовать поле
    return false;
}

int main() {
    // массив для игровой доски
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    // переменные для игры
    char turn = 'X';
    bool draw = false;

    cout << "\t\t\tT I C -- T A C -- T O E -- G A M E\t\t\t";
    cout << "\n\t\t\tFOR 2 PLAYERS\t\t\t\t\n";

    while (game_over(&draw, board)) {
        draw_board(board);
        player_turn(&turn, board);
        game_over(&draw, board);
    }

    if (turn == 'X' && !draw) {
        cout << "\n\nCongrats! Player 2 has won the game!";
    } else if (turn == '0' && !draw) {
        cout << "\n\nCongrats! Player 1 has won the game!";
    } else {
        cout << "\n\nGame over!\n\n";
    }

    return 0;
}



