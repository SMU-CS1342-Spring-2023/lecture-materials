# Exam 2 Review

## Overview
- Chapters 6 - 10
- Mostly free response / short question answer type questions. 
- May have a few multiple choice questions
- Will consist of 1 or 2 short code exercises (5 - 10 lines of code max)
- No electronics
- 1 3x5 handwritten notecard allowed for notes (front and back)
- Have full class time to complete exam

## Chapters

### __Chapter 6__ - STL Vectors and Arrays
- Built-in c-arrays
    - Understand how they are allocated
    - Be able to draw a memory diagram of an array
- STL Vectors
    - What is a vector? 
    - How is a vector different from an array? 
    - `.push_back()` function
- Common algorithms (Both arrays and vectors)
    - find maximum value in an array or vector
    - find min value in an array or vector
    - find average of all values in array or vector
- Iterating through vectors
    - For loops
    - Range-based for loops 
- 2D Vectors
    - How to print a 2D vector

### __Chapter 7__ - Streams and I/O
- cin / cout and the input / output buffer
    - `getline()` vs `>>`
- Stream Manipulators
    - `fixed`, `setprecision()`, `setw`, `left`, `right`, etc. 
    - Know what `endl` and `flush` do to the output stream
- StringStreams
    - input and output with string streams
    - How to parse a string. EX: 
        - parse all words separated by a comma given `"This,is,an,example"`
- File I/O
    - Review how to create a file object, open it, parse information and close file. 
    - Review Program 3!

### __Chapter 8__ - Recursion
- What are the parts of a recursive function? 
- What is fan-out? 
- Be able to create a simple recursive function like...
    - Count down
    - Factorial
    - Fibonacci
- Review the palindrome example from recorded lecture
- Compare / contrast recursion vs iteration

### __Chapter 9__ - Big-O and Algorithms
- What is Big-O?
- Determine the Big-O given a function 
    - ex: What is the Big-O of `f(n) = 5n^2 + 10n +  4`
    - Recognize the Big-O of a C++ function
- Algorithms
    - Review Linear Search vs Binary Search
    - Sorting Algorithms - _be able to step through the following algorithms_
        - Selection Sort
        - Insertion Sort
        - _know their Big-O performance_

### __Chapter 10__ - Objects and Classes
- What is OOP? Why do we use OOP?
- What is an object? What is a class? 
- What is Encapsulation? What is Abstraction?
- What are the 3 pillars of Object Oriented Programming?
- Be confident in implementing a class definition with the following
    - private data members
    - getters / setters
    - default constructor
    - overloaded constructor
    - Any other utility function
    - Understand how to implement function definitions outside of class declaration
- Be able to create an instance of a class and understand how `private` vs `public` works on data members and methods.