#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Parameterized constructor
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called" << endl;
    }

    // Copy constructor
    Student(const Student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy constructor called" << endl;
    }

    void displayinfo() {
        cout << "Name is: " << name << endl;
        cout << "Age is : " << age << endl;
    }
};

int main() {
    Student s1("Ash", 21); // Calls parameterized constructor
    s1.displayinfo();

    cout << endl;

    Student s2 = s1;       // Calls copy constructor
    s2.displayinfo();

    return 0;
}
