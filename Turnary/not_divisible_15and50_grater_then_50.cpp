#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    (num%15==0 || num%50==0 && num>100)?cout<<num:cout<<"false";
}