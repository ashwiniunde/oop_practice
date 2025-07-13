#include<iostream>
using namespace std;


class student
{
    public:
    string name;
    int age;
    // parameterized constructor
    student(string n,int a)
    {
        name=n;
        age=a;
    }

    void displayinfo(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is :"<<age<<endl;
    }
    
};

int main()
{
    student s("Ashwini",20);
    return 0;
}
