#include<iostream>
using namespace std;

class Parent {
public:
    void greet() {
        cout << "Hello from Parent " << endl;
    }
};

class Son : public Parent {
public:
    void bike() {
        cout << "Son rides bike " << endl;
    }
};

class Daughter : public Parent {
public:
    void dance() {
        cout << "Daughter dances " << endl;
    }
};

int main() {
    Son s;
    Daughter d;
    s.greet();
    s.bike();
    d.greet();
    d.dance();
    return 0;
}
