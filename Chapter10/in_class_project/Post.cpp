//
// Created by Erik Gabrielsen on 3/22/23.
//

#include "Post.h"

// definition
void Post::display() {
    cout << "Post" << endl;
    cout << title << endl;
    cout << "Message: " << message << endl;
    cout << "Total Likes: " << numLikes << endl;
}

string Post::getTitle() const {
    return title;
}

string Post::getMessage() const {
    return message;
}

int Post::getNumLikes() const {
    return numLikes;
}

void Post::setTitle(string value) {
    title = value;
}

void Post::setMessage(string value) {
    // validation check
    if (value.size() < 300) {
        message = value;
    } else {
        cout << "Error: Message cannot exceed 300 characters" << endl;
    }
}

void Post::setNumLikes(int value) {
    numLikes = value;
}

Post::Post() {
    cout << "Default Constructor" << endl;

    setTitle("");
    setMessage("");
    setNumLikes(0);
}

Post::Post(string title, string message) {
    cout << "Overloaded Constructor" << endl;
    this->title = title;
    this->message = message;
    this->numLikes = 0;
}