//Week days print using the numbers with the help of switch
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the day number:";
    cin>>a;
    switch(a){
        case 1:
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
        cout<<"Frieday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Please enter valid number !";
    }
}