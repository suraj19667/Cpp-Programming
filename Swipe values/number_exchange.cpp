//number exchange 
#include<iostream>
using namespace std;
int main(){
    int a=1234;
    int digit1=a%10;
    a=a/10;
    int digit2=a%10;
    a=a/10;
    int digit3=a%10;
    a=a/10;
    int digit4=a%10;
    a=a/10;
    cout<<"Reverse:"<<digit1<<digit2<<digit3<<digit4;
}