#include<iostream>
using namespace std;
int main()
{
    string myString = "Hello";
    cout << myString[0]<<endl;
    cout<< myString.length()<<endl;
    cout<< myString[1]<<endl; //c++ does not support negative indexing
    cout<< myString.size()<<endl;

}