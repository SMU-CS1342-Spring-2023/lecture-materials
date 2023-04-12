//
// Created by Erik Gabrielsen on 4/12/23.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
    length = 0;
}

void LinkedList::append(int val) {
    // 1. Create a new node for val
    Node *newNode = new Node();
    newNode->data = val; // (*newNode).data = val
    newNode->next = nullptr;

    // 2a - Empty List
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        // 2b
        tail->next = newNode;
        tail = newNode;
    }

    length++;
}

void LinkedList::removeAtBeginning() {
    Node *nodeToRemove = this->head;
    this->head = nodeToRemove->next;
    delete nodeToRemove;
}
