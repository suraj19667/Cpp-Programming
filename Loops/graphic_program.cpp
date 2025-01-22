//gp series 
#include<iostream>
using namespace std;
int main(){
    int a,r,n;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter r:";
    cin>>r;
    cout<<"Enter n:";
    cin>>n;

    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+r;
    }
}