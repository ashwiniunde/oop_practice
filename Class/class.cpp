
#include<iostream>
using namespace std;
class student //student class
 {
    string name;
    int age;

    public:

        void getdata()
        {
            cout<<"Enter Name:";
            cin>>name;
            cout<<"Enter the age::";
            cin>>age;
        }

        void display()
        {
            cout<<"The Name is ::"<<name<<endl;
            cout<<"The AGe is ::"<<age<<endl;
        }
 };

 int main()
 {
    student s; // object s of class stident
    s.getdata();
    s.display();
 }
