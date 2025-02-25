//exception handling method 2
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;

    try{

        if(b==0){
            
            throw "Dimonimator cannot be zero!";
        }
        else{
            cout<<a/b;
        }
    }

    catch(const char *n){
        cout<<"Error"<<n;
    }
}