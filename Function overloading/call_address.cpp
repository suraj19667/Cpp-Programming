//call by address
#include<iostream>
using namespace std;

//call by address
int pusone(int *num){//formal argument
    *num=*num+1;
    return *num;
}

int main(){
    int a=10;
    cout<<pusone(&a)<<endl;//actual argument
    cout<<a;
}
//function with same name but different parameter is called function overloading