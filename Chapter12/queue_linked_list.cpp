#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node *next;
};

class Queue {
 private:
  Node *head;
  Node *tail;
  int size;

 public:
  Queue();
  void push(int val);
  int pop();
};

Queue::Queue() {
  size = 0;
  head = nullptr;
  tail = nullptr;
}

void Queue::push(int val) {
  Node *newNode = new Node();
  newNode->data = val;
  newNode->next = nullptr;

  cout << "Insert Value: " << val << endl;
  if (head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    tail = newNode;
  }

  size++;
}

int Queue::pop() {
  if (size == 0) {
    cout << "Queue Empty" << endl;
    return -1;
  } else {
    Node *temp = this->head;
    int poppedVal = head->data;
    this->head = head->next;
    delete temp;
    size--;
    cout << "Popped Value: " << poppedVal << endl;
    return poppedVal;
  }
}

int main() {
  Queue *queue = new Queue();

  queue->push(1);
  queue->push(2);
  queue->push(3);
  queue->push(4);
  queue->push(5);

  queue->pop(); // 1
  queue->pop(); // 2
  queue->pop(); // 3
  queue->pop();
  queue->pop();
  queue->pop();

  return 0;
}