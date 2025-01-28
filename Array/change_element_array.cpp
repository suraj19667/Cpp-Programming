//change the element in array
#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,4,5,6,8,3,4,5,6,9};

    for(int i=0;i<10;i++){
        if(arr[i]==5){
            arr[i]=0;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<10;i++){
        if(arr[i] !=5){
            cout<<arr[i]<<endl;
        }
    }
}