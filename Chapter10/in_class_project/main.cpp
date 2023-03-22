#include <iostream>
#include <string>

using namespace std;

class Post
{
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
    Post();                             // default constructor
    Post(string title, string message); // overloaded constructore

private:
    string title;
    string message;
    int numLikes;
};

// definition
void Post::display()
{
    cout << "Post" << endl;
    cout << title << endl;
    cout << "Message: " << message << endl;
    cout << "Total Likes: " << numLikes << endl;
}

string Post::getTitle() const
{
    return title;
}

string Post::getMessage() const
{
    return message;
}

int Post::getNumLikes() const
{
    return numLikes;
}

void Post::setTitle(string value)
{
    title = value;
}

void Post::setMessage(string value)
{
    // validation check
    if (value.size() < 300)
    {
        message = value;
    }
    else
    {
        cout << "Error: Message cannot exceed 300 characters" << endl;
    }
}

void Post::setNumLikes(int value)
{
    numLikes = value;
}

Post::Post()
{
    cout << "Default Constructor" << endl;

    setTitle("");
    setMessage("");
    setNumLikes(0);
}

Post::Post(string title, string message)
{
    cout << "Overloaded Constructor" << endl;
    this->title = title;
    this->message = message;
    this->numLikes = 0;
}

int main()
{
    Post p; // Creates the memory corresponding to my post

    //    p.setTitle("CS 1342 Announcement!");
    //    p.setMessage("This class today was inspiring and awesome!");
    //    p.setNumLikes(10000);
    //
    //    p.display();

    return 0;
}
