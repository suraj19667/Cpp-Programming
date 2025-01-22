#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%5==0 && num>50){
        cout<<"divisible and grater";
}
    else{
        cout<<"not grater and divisible";
    }
}