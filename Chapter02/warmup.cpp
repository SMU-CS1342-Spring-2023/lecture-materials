#include <iostream>

using namespace std;

int main()
{
    const int hoursPerClass = 3;

    int numberOfClasses;
    int number_of_classes;
    cout << "Enter the total number of classes: ";
    cin >> numberOfClasses;

    // 3 is the number of hours per class
    int totalNumberOfHours = numberOfClasses * hoursPerClass;

    cout << "Total Hours: " << totalNumberOfHours;

    return 0;
}