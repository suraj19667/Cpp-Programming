//find minimum value in array
#include<iostream>
using namespace std;

int minimum(){

    int arr[10]={35,67,8,9,847,4,3,2,3,46};
    int ans=arr[0];

    for(int i=1;i<9;i++){
        
        if(arr[i]<ans){
            ans=arr[i];
            
        }
    }
    return ans;
}

int main(){

    cout<<minimum();
}