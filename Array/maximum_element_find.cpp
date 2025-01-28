//find the first maximum element in the array
#include<iostream>
using namespace std;
int main(){
    int arr[6]={484,56,4,3,7,678};
    int ans=arr[0];

   for(int i=0;i<6;i++){
       if(arr[i]>ans){
           ans=arr[i];
       }
   }
   cout<<"The Maximum value is:"<<ans<<endl;
}
