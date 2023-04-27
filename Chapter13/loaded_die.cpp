#include <ctime>
#include <random>
#include <iostream>

using namespace std;

class Die {
public:
    Die() {
        srand(time(NULL));
    }

    // pure virtual function
    virtual int roll() = 0;

    void Print() {
        cout << "rolled " << value << endl;
    }

protected:
    int value;
};

class TenSidedDie: public Die {
public:
    int roll() {
        value = rand() % 10 + 1;
        return value;
    }
};

class RegularDie : public Die {
public:
    RegularDie() : Die() { value = -2; }

    int roll() {
        value = rand() % 6 + 1;
        return value;
    }
};

class LoadedDie : public Die {
public:
    LoadedDie(int x) {
        loadedSide = x;
    }

    int roll() {
        int val = rand() % 2;
        if (val == 1)
            value = rand() % 6 + 1;
        else
            value = loadedSide;
        return value;
    }

private:
    int loadedSide;
};

class Cup {
public:
    Cup();

    void shake();

    void Print();

private:
    vector<Die *> dice;
};

Cup::Cup() {
    dice.push_back(new LoadedDie(6));
    dice.push_back(new LoadedDie(6));
    dice.push_back(new LoadedDie(6));
    dice.push_back(new RegularDie());
    dice.push_back(new RegularDie());
    dice.push_back(new RegularDie());
}

void Cup::shake() {
    for (int i = 0; i < dice.size(); i++)
        dice.at(i)->roll();
}

void Cup::Print() {
    for (int i = 0; i < dice.size(); i++)
        dice.at(i)->Print();
}

int main() {

//    RegularDie *d1 = new RegularDie();
//    LoadedDie *d2 = new LoadedDie(6);
//
//    Die *ptrA = d1;
//    Die *ptrB = d2;
//
//    for (int i = 0; i < 10; i++) {
//        int d1_value = ptrA->roll();
//        int d2_value = ptrB->roll();
//
//        cout << "Regular Die: " << d1_value << " | Loaded Die: " << d2_value << endl;
//    }

    TenSidedDie die;


    Cup *c = new Cup();
    c->shake();
    c->Print();

    return 0;
}