#include<iostream>
using namespace std;
 int main(){
    int year;
    cout<<"Enter Year:";
    cin>>year;
    if(year%4==0 || year%400==0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not Leap Year!";
    }
 }