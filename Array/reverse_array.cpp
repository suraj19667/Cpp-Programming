//rever the array 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,4,3,2,4};

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    int i=0;
    int j=4;
    while(i!=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}