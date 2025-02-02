//find more than 1 element in array 
#include<iostream>
using namespace std;
int main(){

    int arr[]={3,2,1,1,2,3,4,5,6,6,5,4};
    for(int i=0;i<12;i++){
        int count=1;
        if(arr[i]!=-1){
        for(int j=i+1;j<12;j++){
            if(arr[j]==arr[i]){
            count++;
            arr[j]=-1;
            }
        }
        cout<<" frequency of "<<arr[i]<<" is "<<count<<endl;
    }
    }
}