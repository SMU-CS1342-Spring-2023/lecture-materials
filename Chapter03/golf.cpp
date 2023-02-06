#include <iostream>
using namespace std;

int main()
{
    enum GOLF_SCORE
    {
        HOLE_IN_ONE = 1,
        EAGLE,
        BIRDIE,
        PAR
    };
    int score;

    cin >> score; // 4

    // Assumes "par 4"
    if (score <= 0)
    {
        cout << "Invalid entry." << endl;
    }
    else if (score == 1)
    {
        cout << "Hole in 1!!!" << endl;
    }
    else if (score == 2)
    {
        cout << "Eagle!" << endl;
    }
    else if (score == 3)
    {
        cout << "Birdie!" << endl;
    }
    else if (score == 4)
    {
        cout << "Par." << endl;
    }
    else
    {
        cout << "Better luck next time." << endl;
    }

    switch (score)
    {
    case HOLE_IN_ONE:
        cout << "Hole in 1!!!" << endl;
        break;
    case EAGLE:
        cout << "Eagle!" << endl;
        break;
    case BIRDIE:
        cout << "Birdie!" << endl;
        break;
    case PAR:
        cout << "Par!" << endl;

    default:
        cout << "Invalid entry." << endl;
        break;
    }

    return 0;
}