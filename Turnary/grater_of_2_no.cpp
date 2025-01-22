#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the first Number:";
    cin>>x;
    cout<<"Enter the second Number:";
    cin>>y;
    cout<<"Enter the third Number;";
    cin>>z;
    (x>y && x>z)?cout<<x:(y>z && y>x)?cout<<y:cout<<z;
}