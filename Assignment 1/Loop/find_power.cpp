//find power with return type
#include<iostream>
using namespace std;

int power(){

    int base,power,ans=1;
    cout<<"Enter a base:";
    cin>>base;
    cout<<"Power:";
    cin>>power;
    
    for(int i=1;i<=power;i++){
        ans=ans*base;
    }
  
    return ans;
}

int main(){

    cout<<power();
}