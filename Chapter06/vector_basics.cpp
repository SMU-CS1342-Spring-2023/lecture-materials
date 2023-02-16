#include <iostream>
#include <vector>

using namespace std;

// findMax
int findMax(const vector<int> &nums)
{
    int maxValue = nums.at(0);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums.at(i) > maxValue)
        {
            maxValue = nums.at(i);
        }
    }

    return maxValue;
}

void displayTable(vector<vector<string>> &table)
{
    for (auto &row : table)
    {
        for (auto &col : row)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void displayVector(const vector<int> &numbers)
{
    for (int current : numbers)
    {
        cout << current << " ";
    }
    cout << endl;
}

int main()
{
    /**
     * Vector Basics
     */

    // Vector Declaration
    vector<int> vectorA;
    vector<string> vectorB;

    vector<int> vectorC(10);
    vector<int> vectorD(10, 1);
    vector<int> vectorE = {0, 1, 2, 3, 4, 5};

    // .push_back()
    vector<int> my_numbers; // size 0, capacity 0
                            //    my_numbers.at(0) = 10; // throw runtime exception.
    my_numbers.push_back(10);
    my_numbers.push_back(12);
    my_numbers.push_back(14);
    my_numbers.push_back(16);

    vector<int> numbers;
    int current;
    do
    {
        cout << "Enter a number: ";
        cin >> current;
        numbers.push_back(current);
    } while (current != 0);

    // for-loop
    //    for (int i = 0; i < numbers.size(); i++) {
    //        int current = numbers.at(i);
    //        cout << current << endl;
    //    }

    // range-based for loop
    for (int current : numbers)
    {
        current += 10;
    }

    displayVector(numbers);

    for (auto &current : numbers)
    {
        current += 10;
    }

    displayVector(numbers);

    // Find Max

    // .resize(int)
    numbers.resize(100);

    // Iterating through vectors (for-loops, range-based loop)

    // vectors and functions

    /**
     * Parallel vectors
     */
    vector<string> names = {"Bob", "Erik", "John", "Sarah"};
    vector<string> phone_numbers = {"123-456-7890", "432-234-2342", "851-480-4875", "877-957-4857"};
    vector<int> ages = {25, 45, 50, 65};

    string phoneNumber;
    cin >> phoneNumber;

    int foundIndex;
    for (int i = 0; i < phone_numbers.size(); i++)
    {
        if (phone_numbers.at(i) == phoneNumber)
        {
            foundIndex = i;
        }
    }

    names.at(foundIndex);
    ages.at(foundIndex);

    /**
     * Multi-dimensional vectors
     */
    vector<vector<string>> table;

    for (int i = 0; i < 4; i++)
    {
        vector<string> row;
        for (int j = 0; j < 6; j++)
        {
            row.push_back("100");
        }
        table.push_back(row);
    }

    displayTable(table);

    return 0;
}
