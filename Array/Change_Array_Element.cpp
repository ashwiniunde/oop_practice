// Changing the Array Element
#include<iostream>
using namespace std;
int main()
{       //Array index start from the 0 position
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"}; //here Volvo  is at the first position i.e.0  position    
    cout <<"First element is:" <<cars[0]<<endl;
    cars[0]="Opel"; //changed th first ele by Opel
    cout <<"First element changed::" <<cars[0]; // Opel
    return 0;
}
