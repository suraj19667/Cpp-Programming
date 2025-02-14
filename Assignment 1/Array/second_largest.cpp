//second largest number in array
#include<iostream>
using namespace std;

int largest(){

    int arr[]={4,3,2,5,6,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    {
        for(int i=0;i<size;i++){

            for(int j=i+1;j<size;j++){

                if(arr[j]<arr[i]){

                    int ans=arr[i];
                    arr[i]=arr[j];
                    arr[j]=ans;
                }
            }
            
        }
       
    }
         cout<<arr[1];
         return 0;
}

int main(){

   largest();

}