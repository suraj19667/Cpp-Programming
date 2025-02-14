//factorial non return type
#include<iostream>
using namespace std;

void factorial(int num){

    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    cout<<ans;
}
int main(){
    int a;
    cout<<"Enter Number for Factorial:";
    cin>>a;
    factorial(a);
}