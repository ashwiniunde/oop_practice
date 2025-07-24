// Function Overloading in Polymorphism 
// same function name with different parameter
// In this case only changing return type(void and int) will not work
#include<iostream>
using namespace std;
class A
{
    public:
    void sayHello() // Fnunction  with no paramters
    {
        cout<<"Hello All !"<<endl;
    }

    void sayHello(string name) // function with 1 parameters
    {
        cout<<"Hello "<<name<<endl;
    }

    void sayHello(string name ,string name1) // Function with 2 parameters
    {
        cout<<"Hello "<<name<<" and "<<name1<<endl;
    }

};
int main()
{
    A a;
    a.sayHello();
    a.sayHello("Ashwini");
    a.sayHello("Ram","Sham");
}
