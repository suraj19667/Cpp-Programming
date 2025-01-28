//each element add 5 and print after ading
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,5,6,8,3,4,5,6,9};

    for(int i=0;i<10;i++){

        arr[i]=arr[i]+5;
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    }
}