//
// Created by Erik Gabrielsen on 3/22/23.
//

#include "User.h"

string User::getName() {
    return this->name;
}

string User::getEmail() {
    return this->email;
}

int User::getId() {
    return this->id;
}

void User::setName(std::string name) {
    this->name = name;
}

void User::setEmail(std::string email) {
    this->email = email;
}

void User::setId(int id) {
    this->id = id;
}

User::User(): name{"No Name"}, email{"test@test.com"}, id{nextId} {
    cout << "Default Constructor (User)" << endl;
    nextId++;
}

User::User(string name, string email): name{name}, email{email}, id{nextId} {
    cout << "Overloaded Constructor (User)" << endl;
    nextId++;
}

void User::createPost(string title, string message) {
    // 1. Create Post Object
    Post newPost(title, message);
    // 2. Add the post object to our posts vector
    this->posts.push_back(newPost);
}

void User::display() {
    cout << "Name: " << name << endl;
    cout << "Email: " << email << endl;

    // Print the posts
    for (Post p: posts) {
        p.display();
    }
}
