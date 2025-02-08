//input a number by user and add 1 of the number and print the number
#include<iostream>
using namespace std;
//call by value

int  plusone(int num){//formal argument
    num=num+1;
    return num;
}
int main(){
    int a=10;
    cout<<plusone(a)<<endl;//actual argument
    cout<<a;
}