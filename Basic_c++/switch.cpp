#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the day number between (1-7)::";
    cin>>day;

    switch(day){
        case 1: //case 1 if 1 is entered it will output as Monday
        cout<<"Monday";
        break;
        
        case 2:
        cout<<"Tuesday";
        break;
         
        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Enter valid day number.."; 
    }
    return 0;
}