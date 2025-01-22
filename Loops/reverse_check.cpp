//check reverse number 
#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    
    cout<<"Enter the number:";
    cin>>num;
    int ans=num;
    
    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;

    }
    if(ans==rev){
        cout<<"Primdom";
    }
    else{
        cout<<"Not a pridom num:";
    }

}