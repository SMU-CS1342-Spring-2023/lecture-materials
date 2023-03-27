//
// Created by Erik Gabrielsen on 3/22/23.
//

#ifndef OBJECTS_USER_H
#define OBJECTS_USER_H

#include <string>
#include <iostream>
#include "Post.h"
#include <vector>

using std::string;
using std::cout;
using std::endl;
using std::vector;

class User {
public:
    // Constructor
    User();
    User(string name, string email);

    // Getters and Setters
    string getName();
    string getEmail();
    int getId();

    void setName(string name);
    void setEmail(string email);
    void setId(int id);

    // Create Post
    void createPost(string title, string message);

    void display();

    static int nextId;

private:
    vector<Post> posts;

    string name;
    string email;
    int id;
};



#endif //OBJECTS_USER_H
