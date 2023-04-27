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
