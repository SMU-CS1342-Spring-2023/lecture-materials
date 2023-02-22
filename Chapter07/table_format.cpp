#include <ctime>
#include <iomanip>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>

using namespace std;

void printRow(const int data[], const int &size)
{
    for (int i = 0; i < size; i++)
    {
        // add manipulators to make this better!

        cout << setw(7) << left << data[i] << ' ';
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        const int size = 10;
        int numbers[size];

        for (int j = 0; j < size; j++)
            numbers[j] = rand() % 100000;

        printRow(numbers, size);
    }

    return 0;
}