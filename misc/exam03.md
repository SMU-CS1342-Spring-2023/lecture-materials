# Exam 2 Review

## Overview
- Chapters 10 - 13
- Mostly free response / short question answer type questions. 
- May have a few multiple choice questions
- Will consist of 1 or 2 short code exercises (5 - 10 lines of code max)
- No electronics
- 1 3x5 handwritten notecard allowed for notes (front and back)
- Have full class time to complete exam

## Chapter 10
- Classes / Objects
    - Know how to declare classes, implement them
    - Know how to declare objects of a class. 

## Chapter 11
- Pointers
    - normal variables
    - reference operator &
    - dereference operator *
    - pointers -> variable that stores a memory address
    `int *ptr = &variable;`
    - pointers holding memory addresses on the stack
    - pointers holding memory addresses of things on the heap.
- Dynamic Memory Allocation
    - Differences between Stack and Heap
    - Memory Diagrams
    - new / delete / delete[]
    - Memory Leak!
    - Dynamically allocated arrays and static arrays
        - Memory address arithmetic / offset
        ```c++
        int *array = new int[10];
        array[0] = 10;
        *(array + 1) = 20;
        ```
- Rule of Three
    - Know when to use rule of 3. Know how to implement said rule of 3
    - Destructor
    - Copy Constructor
    - Copy Assignment Operator

## Chapter 12 - Linked Lists, Stacks, Queues
- Linked Lists
    - Nodes -> Know what a node is and what makes up a node. 
    - Single vs Double Linked Lists
    - Add items to a linked list
    - remove items from linked list
    - _Traversing a linked lists._

- Linked Lists vs Vectors / Arrays

- Stacks
    - LIFO
    - How to implement w. Linked List & Vector
- Queues
    - FIFO
    - How to implement w. Linked List & Vector

## Chapter 13 - Inheritance / Polymorphism
- OOP
    - Encapsulation
    - Inheritance 
    - Polymorphism
- Inheritance 
    - base
    - derived
    - data members: public, private, protected
    - Constructors and lifecycle of objects with inheritance.
        - initializer list for overriding base class constructor
- Overriding vs Overloading functions
- Polymorphism - Many forms
    - Compile time polymorphism - overloading functions.
    - Runtime polymorphism
        - Pointers
        - inheritance
        - virtual keyword
    - virtual keyword
    - pure virtual function
    - abstract class -> means we cannot create an instance of this class.
    

