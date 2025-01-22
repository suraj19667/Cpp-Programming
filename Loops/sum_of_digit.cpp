//sum of digit in a number
#include<iostream>
using namespace std;
int main(){
    int num,digit=0,sum=0;
    cout<<"Enter a number:";
    cin>>num;
    digit=num;

    while(num>0){

    digit=num%10;
    num=num/10;
    sum=sum+digit;
   
    }
    cout<<"The Sum is:"<<sum<<endl;
}