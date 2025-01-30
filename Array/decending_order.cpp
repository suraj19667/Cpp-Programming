//print deceding order
//arrange the given array in aseending order
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,3,6,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    {
        for(int i=0;i<5;i++){

            for(int j=i+1;j<5;j++){

                if(arr[j]>arr[i]){

                    int ans=arr[i];
                    arr[i]=arr[j];
                    arr[j]=ans;
                }
            }
            
        }
       
    }
     for(int i=0;i<size;i++){
         cout<<arr[i];
        }
}