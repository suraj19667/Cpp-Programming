//find the dublicate number and cout the dublicate number
#include<iostream>
using namespace std;
int main(){

    int arr[]={1,2,3,4,1,1,5,6,5};

    for(int i=0;i<6;i++){
        
        for(int j=(i-1);j<6;j++){

            if(j!=-1){
             
             count++;
             arr[j]=-1;
            }
        }
        cout<<i;
    }
}