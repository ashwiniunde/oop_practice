#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void speak() {
        cout << "Animal speaks 🐾" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks " << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void speak() {
        cout << "Cat meows " << endl;
    }
};

int main() {
    // Base class pointer
    Animal* a;

    Dog d;
    Cat c;

    // Pointing to Dog object
    a = &d;
    a->speak();  // Output: Dog barks 🐶

    // Pointing to Cat object
    a = &c;
    a->speak();  // Output: Cat meows 🐱

    return 0;
}
