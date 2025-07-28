// Single Inheritance
#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks " << endl;
    }
};

class Dog : public Animal {
    // inherits speak() in sunclass
};

int main() {
    Dog d;
    d.speak();
    return 0;
}
