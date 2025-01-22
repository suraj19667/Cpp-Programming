//ap series
#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter d:";
    cin>>d;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+d;
    }
}