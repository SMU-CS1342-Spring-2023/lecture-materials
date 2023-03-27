//
// Created by Erik Gabrielsen on 3/22/23.
//

#ifndef OBJECTS_POST_H
#define OBJECTS_POST_H

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Post {
public:

    // Utility Functions
    void display(); // declaration

    // Getters
    string getTitle() const;
    string getMessage() const;
    int getNumLikes() const;

    // Setters
    void setTitle(string value);
    void setMessage(string value);
    void setNumLikes(int value);

    // Constructors
    Post(); // default constructor
    Post(string title, string message); // overloaded constructore

private:
    string title;
    string message;
    int numLikes;
};



#endif //OBJECTS_POST_H
