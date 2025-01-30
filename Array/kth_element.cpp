//find the kth largest element in array
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,7,8,9,10,78};
        int k;
        cout<<"enter the find largest element:";
        cin>>k;
        
        int size=sizeof(arr)/sizeof(arr[0]);
        {
            for(int i=0;i<k;i++){
                
                for(int j=i+1;j<size;j++){
                    
                    if(arr[j]>arr[i]){
                        
                        int ans=arr[i];
                        arr[i]=arr[j];
                        arr[j]=ans;
                    }
                }
                
            }
        }
    cout<<arr[k-1];
}