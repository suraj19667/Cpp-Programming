//n numbers add
#include<iostream>
using namespace std;

void numberadd(int num);
int digit=0,sum=0;
    cout<<"Enter a number:";
    cin>>num;
    digit=num;

    while(num>0){

    digit=num%10;
    num=num/10;
    sum=sum+digit;
   return 0;
    }

    int main(){

        cout<<numberadd;
        return 0;
    }

