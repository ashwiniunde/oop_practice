// In thsi code I have taken the array input and output
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of Array::";  //Array size of an element
    cin>>size;
    int arr[20];
    cout<<endl;
    // Input of array
    for(int i=1; i<=size; i++)
    {   
        cout<<"Enter the Array Element of Position "<<i<< "::"; //Entering Array elements
        cin>>arr[i];
      
    }

    // Output of Array
     cout<<"Array Elements::"<<endl;
    for(int i=1; i<=size; i++)
    {
        cout<<i<<"=="<<arr[i];
        cout<<endl;
    }
    return 0;
}
