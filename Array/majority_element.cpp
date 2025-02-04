//find the majority element in an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,5,6,6,7};

    int count=1;
    int ans=arr[0];
    for(int i=1;i<8;i++){
        if(arr[i]==ans){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ans=arr[i];
            count=1;
        }
    }
    cout<<ans;
}