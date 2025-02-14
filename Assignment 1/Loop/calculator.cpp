#include<iostream>
using namespace std;

int calculator(){

    int a,b,c,d,e,f;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    
    cout<<"Addition is:"<<a+b<<endl;
    cout<<"Substraction is:"<<a-b<<endl;
    cout<<"Multiply is:"<<a*b<<endl;
    cout<<"Division is:"<<a/b<<endl;
    
    return 0;
}
int main(){

    calculator();
}