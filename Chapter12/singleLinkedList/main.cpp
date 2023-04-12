#include <iostream>
#include "LinkedList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    LinkedList list;
    list.append(10);
    list.append(11);

    int values[10];

    for (int i = 0; i < 10; i++) {
        values[i]; // *(values + i)
    }
    return 0;
}
