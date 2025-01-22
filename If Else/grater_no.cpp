#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first no:";
    cin>>x;
    cout<<"Enter second no";
    cin>>y;
    cout<<"Enter third no:";
    cin>>z;
    if(x>y && x>z){
        cout<<x;
    }
    else if(y>x && z>y){
        cout<<y;
    }
    else{
        cout<<z;
    }
}