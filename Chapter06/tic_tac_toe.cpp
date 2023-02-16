#include <iostream>
#include <vector>

using namespace std;

void printBoard(const vector<vector<char>> &board);
char getWinner(const vector<vector<char>> &board);

int main()
{
    vector<vector<char>> board = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    int turn{0};

    do
    {
        int row, col;
        printBoard(board);

        if (turn % 2 == 0)
        {
            cout << "Player 1 Enter Location: ";
            cin >> row >> col;

            board.at(row).at(col) = 'X';
        }
        else
        {
            cout << "Player 2 Enter Location: ";
            cin >> row >> col;

            board.at(row).at(col) = 'O';
        }
        turn++;
    } while (getWinner(board) == ' ');

    char winner = getWinner(board);
    if (winner == 'X')
    {
        cout << "Congrats Player 1!!" << endl;
    }
    else
    {
        cout << "Congrats Player 2!!" << endl;
    }

    printBoard(board);

    return 0;
}

void printBoard(const vector<vector<char>> &board)
{
    for (auto &row : board)
    {
        for (auto &space : row)
        {
            cout << space << " ";
        }
        cout << endl;
    }
}

char getWinner(const vector<vector<char>> &board)
{
    // determine if winner in each row

    // determine if winner in each column

    // determine if winner in each diagonal

    return ' ';
}