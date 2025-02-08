//default argument
#include<iostream>
using namespace std;

int sum(int a=0;int b=0){
    return a+b;
}
int main(){

    cout<<sum(7);
}