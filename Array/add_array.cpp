//add all element in array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,6,2,4};
    int sum=0;
    
    for(int i=0;i<5;i++){
    sum=sum+arr[i];
        
    }
    cout<<sum;
}