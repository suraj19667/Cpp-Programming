//first and last number add and replace to 5
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,6,7};

    arr[2]=arr[0]+arr[4];
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    
    

}