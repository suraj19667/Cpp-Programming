//1 to 20 all number print with the helop of for loop
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;

    cout<<"Enter a number:";
    cin>>num;

    for(int i=1;i<=num;i++){
        sum+=i;
    }
    cout<<sum;
}