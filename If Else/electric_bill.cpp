#include<iostream>
using namespace std;
int main(){
    float unit;
    cout<<"Enter Unit:";
    cin>>unit;
    if(unit<100){
        cout<<unit*0;
    }
    else if(unit<=100 && unit>=50){
        cout<<unit*20;
    }
    else if(unit>=20 && unit<50){
        cout<<unit*10;
    }
    else if(unit>0 && unit<=20){
        cout<<unit*5;
    }
    else{
        cout<<"INVALID !";
    }
}