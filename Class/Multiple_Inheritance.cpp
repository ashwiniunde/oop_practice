#include<iostream>
using namespace std;

class Dad {
public:
    void work() {
        cout << "Dad works " << endl;
    }
};

class Mom {
public:
    void cook() {
        cout << "Mom cooks " << endl;
    }
};

class Child : public Dad, public Mom {
public:
    void play() {
        cout << "Child plays " << endl;
    }
};

int main() {
    Child obj;
    obj.work();
    obj.cook();
    obj.play();
    return 0;
}
