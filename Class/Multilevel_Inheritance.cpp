#include<iostream>
using namespace std;

class Grandparent {
public:
    void legacy() {
        cout << "Legacy from Grandparent " << endl;
    }
};

class Parent : public Grandparent {
public:
    void culture() {
        cout << "Values from Parent " << endl;
    }
};

class Child : public Parent {
public:
    void skills() {
        cout << "Skills of Child " << endl;
    }
};

int main() {
    Child obj;
    obj.legacy();
    obj.culture();
    obj.skills();
    return 0;
}
