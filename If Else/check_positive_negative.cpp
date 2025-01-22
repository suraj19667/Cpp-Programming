//check positive, negative and zero
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(num>0){
        cout<<"Possitive";
    }
    else if(num<0){
        cout<<"Negative";
    }
    else{
        cout<<"zero";
    }
}