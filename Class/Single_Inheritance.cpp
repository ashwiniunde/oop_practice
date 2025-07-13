#include<iostream>
using namespace std;

class Parent {
public:
    void greet() {
        cout << " Hii I am Parent CLass " << endl;
    }
};

class Child : public Parent {
public:
    void sayHi() {
        cout << " Hello I am Child CLass  " << endl;
    }
};

int main() {
    Child obj;
    obj.greet();
    obj.sayHi();
    return 0;
}
