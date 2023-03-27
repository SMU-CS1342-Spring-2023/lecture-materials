#include "User.h"

using namespace std;

int User::nextId = 0;

int main() {
    User user1("Peruna", "peruna@smu.edu");
    User user2("Peruna", "peruna@smu.edu");

    user1.createPost("Welcome to SMU", "Today is the first day of school!");
    user1.createPost("Oh no midterms", "Midterms are here! Better study");

    user1.display();



//    p.setTitle("CS 1342 Announcement!");
//    p.setMessage("This class today was inspiring and awesome!");
//    p.setNumLikes(10000);
//
//    p.display();

    return 0;
}
