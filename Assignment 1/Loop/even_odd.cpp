//print even odd with the help of function without return 
#include<iostream>
using namespace std;

int evenodd(){

    int num;
    cout<<"Enter the number:";
    cin>>num;

    if(num%2==0){
        cout<<"This is a Even Number";
    }
    else{

        cout<<"This is a Odd Number";
    }
    return 0;

}

int main(){

    cout<<evenodd();
}