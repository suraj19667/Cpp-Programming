//print array and swipe
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8};

    int temp=arr[1];
    arr[1]=arr[3];
    arr[3]=temp;

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}