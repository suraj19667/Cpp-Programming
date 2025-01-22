#include<iostream>
using namespace std;
int main(){
    int percentage;
    cout<<"Enter the percentage:";
    cin>>percentage;
    if(percentage>=80 && percentage<=100){
        cout<<"Grade A";
    }
    else if(percentage>=60 && percentage<80){
        cout<<"Grade B";
    }
    else if(percentage>=30 && percentage<60){
        cout<<"Grade C";
    }
    else if(percentage>=0 && percentage<30){
        cout<<"Grade D";
    }
    else{
        cout<<"Invalid";
    }
}