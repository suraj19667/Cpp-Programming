//check the number it is Prime or Not Prime
#include<iostream>
using namespace std;

int prime(){
    int num,count=0;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1){
        cout<<"not a prime";
        return 0;
    }
    for(int i=2;i*i<=num;i++){

        if(num%i==0){
            cout<<"Not a prime";
          
        }
       else{
        cout<<"Prime";
       }
    }
    return 0;
   
}

int main(){

    prime();
}