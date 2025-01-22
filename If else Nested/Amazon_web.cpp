//Amazon web with nested
#include<iostream>
using namespace std;
int main(){
    string web;
    cout<<"Enter website:";
    cin>>web;
    if(web=="Amazon"){
        cout<<"Service and product:";
        cin>>web;
        if(web=="Service"){
            cout<<"Not Available";
        }
        else if(web=="Product"){
            cout<<"Product Available";
        }
        else{
            cout<<"Invalid";
        }
    }
    else{
        cout<<"Invalid Website!";
    }
}