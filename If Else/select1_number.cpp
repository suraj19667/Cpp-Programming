#include<iostream>
using namespace std;
int main(){
    int num1,num2,choice;
    cout<<"Enter a first Number:";
    cin>>num1;
    cout<<"Enter second Number:";
    cin>>num2;
    cout<<"Enter 1 for add, Enter 2 for sub, Enter 3 for multiplication:";
    cin>>choice;
    if(choice==1){
        cout<<num1+num2;
    }
    else if(choice==2){
        cout<<num1-num2;
    }
    else if(choice==3){
        cout<<num1*num2;
    }
    else{
        cout<<"Invalid Number!";
    }
}