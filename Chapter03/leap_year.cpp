#include <iostream>
#include <string>
using namespace std;

int main()
{
    /* Every 4rth year is a leap year unless it is the 100th year, but the 400th year is a leap year*/
    const int year = 2023;

    if (year % 4 == 0)
    {
        if (number == 100)
        {
            cout << "Not a leap year";
        }
        else
        {
            cout << "Leap Year";
        }
    }
    else
    {
        cout << "Not a leap year";
    }

    return 0;
}