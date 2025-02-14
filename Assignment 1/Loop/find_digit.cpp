//count digit in the given number with the help of return function
#include<iostream>
using namespace std;

int searchdigit(){

    int num,digit=0;
    cout<<"Enter a number:";
    cin>>num;
    while(num>0){

        num=num/10;
        digit++;
    }
    cout<<"Digit is:"<<digit<<endl;
    return 0;
}
int main(){

    searchdigit();
}