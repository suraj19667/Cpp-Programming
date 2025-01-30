//find the single missing element
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,7};

    for(int i=0;i<5;i++){

        if(arr[i+1]-arr[i]>1){
            
            cout<<arr[i+1]-1;
            
        }
    }
}