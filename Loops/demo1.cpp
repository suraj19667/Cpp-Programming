//armstome number 

#include<iostream>
using namespace std;
int main(){
    int num,sum=0,original,digit;
    cout<<"Enter a number:";
    cin>>num;
    original=num;

    while(num>0){

    digit=num%10;
    sum=sum+(digit*digit*digit);
    num=num/10;
    }
    if(original==sum){
        cout<<"Armstone number:";
    }
    else{
        cout<<"not a armstone";
    }
}