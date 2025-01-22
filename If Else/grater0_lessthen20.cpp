#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    if(num>0 && num<20){
        cout<<num*num;
    }
    else if(num>=20 && num<50){
        cout<<num+10;
    }
    else{
        cout<<num-10;
    
    }
}