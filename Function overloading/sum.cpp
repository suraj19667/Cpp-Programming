//funcion overloading in function
#include<iostream>
using namespace std;

int sum(int a){
    return a;
}
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c){
    c+=a+b;
    return c;
}
int main(){
    cout<<sum(5);
    cout<<sum(5,6);
    cout<<sum(4,5,6);
}
