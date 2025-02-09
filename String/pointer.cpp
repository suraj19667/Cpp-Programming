//pointer with the help of referencing and dereferencing
#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p=&a; //referencing

    cout<<*p<<endl;  //dereferencing

    cout<<a;
}