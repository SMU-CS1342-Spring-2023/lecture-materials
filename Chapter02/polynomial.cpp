#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int a{2};
    int b{5};
    int c{10};
    int x;

    cout << "Enter the value for x: ";
    cin >> x;

    // y = ax^2 + bx + c
    int y = a * x * x + b * x + c;

    cout << "y = " << y;

    return 0;
}