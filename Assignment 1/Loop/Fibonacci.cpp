//Fabonacci sriest with the help of functin
#include<iostream>
using namespace std;

int fibonaci(int num){
    int first=0;
    int second=1;
    int next;

    for(int i=0;i<num;i++){

        cout<<first<<endl;
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    fibonaci(num);
    return 0;
    
}