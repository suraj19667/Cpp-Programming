//HCF program
#include<iostream>
using namespace std;
int main(){
    int a,b,max,ans;
    cout<<"enter a:";
    cin>>a;
    cout<<"enter b:";
    cin>>b;

    max(a>b)?a:b;

    for(int i=1;i<=max;i++){
        if(a%i==0 && b%i==0)
        break;
        {
            ans=i;
        }
    }
    cout<<ans;
}