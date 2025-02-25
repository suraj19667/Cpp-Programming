//exception handling
//tyr:- code
//throw :- error throw
//catch:- catch display
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a first number:";
    cin>>a;
    cout<<"Enter a second number:";
    cin>>b;

    try{

        if(b==0){
            throw 0;
        }
        else{
            cout<<a/b;
        }
    }
    catch(int n){
        cout<<"Error demonimator cannot be zero!";
    }
}