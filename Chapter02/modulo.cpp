#include <iostream>

using namespace std;

int main()
{
    // Integer division and modulo
    int x = 17;
    int y = 5;

    int result = x / y;
    int remainder = x % y;

    cout << "Result: " << result << endl;
    cout << "Remainder: " << remainder << endl;

    /**
     * @brief Modulo is also good at determining whether a number is even or odd!
     * More specifically if a number evenly divides into another number
     */
    int evenOrOdd;
    std::cin >> evenOrOdd;

    if (evenOrOdd % 2 == 0)
    {
        std::cout << "Even" << endl;
    }
    else
    {
        std::cout << "Odd" << endl;
    }

    return 0;
}