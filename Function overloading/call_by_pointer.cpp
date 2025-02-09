//call by address with pointer with the help of function

#include<iostream>
using namespace std;

//call by address
int plusone(int *num){  //formal argument

*num=*num+1;
return *num;
}

int main(){

    int a=10;
    cout<<plusone(&a)<<endl;  //actual argument
    cout<<a;
}