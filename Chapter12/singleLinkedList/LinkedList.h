//
// Created by Erik Gabrielsen on 4/12/23.
//

#ifndef LINKEDLIST_LINKEDLIST_H
#define LINKEDLIST_LINKEDLIST_H

struct Node {
    int data;
    Node *next;
};

class LinkedList {
public:
    LinkedList();

    // Insert at end
    void append(int val);
    void removeAtBeginning();

private:
    Node *head;
    Node *tail;
    int length;
};


#endif //LINKEDLIST_LINKEDLIST_H
