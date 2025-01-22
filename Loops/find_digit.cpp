//find digi in the given number
#include<iostream>
using namespace std;
int main(){
    int num,digit;
    cout<<"Enter a number:";
    cin>>num;

    while(num>0){

        num=num/10;
        digit++;
    }
    cout<<"Digit is:"<<count;
}