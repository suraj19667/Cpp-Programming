//addition, substraction, multiplication, divide by using switch
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the opration ( + - * / ):";
    cin>>ch;
    
    switch(ch){

        case '+':
        int a,b;
        cout<<"Enter the first number:";
        cin>>a;
        cout<<"Enter the second number:";
        cin>>b;
        cout<<"The Sum is:"<<a+b;
        break;

        case '-':
        int x,y;
        cout<<"Enter first number:";
        cin>>x;
        cout<<"Enter second number:";
        cin>>y;

        cout<<"Subtraction is:"<<x-y;
        break;

        case '*':

        int c,d;
        cout<<"Enter the first number:";
        cin>>c;
        cout<<"Enter the second number:";
        cin>>d;
        cout<<"Multiplication is:"<<c*d;
        break;

        case '/':
        
        int e,f;
        cout<<"Enter the first number:";
        cin>>e;
        cout<<"Enter the second number:";
        cin>>f;
        cout<<"Divide is:"<<e/f;
        break;


    default:
    cout<<"please enter valide input";
    }
}