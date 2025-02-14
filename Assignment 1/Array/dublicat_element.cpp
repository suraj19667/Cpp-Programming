//find dublicate element in array
#include<iostream>
using namespace std;

int dublicate(){

    int arr[]={3,4,5,2,2,5,7,8,8,7};

    for(int i=0;i<10;i++){

        if(arr[i]!=-1)
        for(int j=i+1;j<9;j++){

            if(arr[j]==arr[i]){

                arr[j]=-1;
                cout<<arr[i];
            }
        }
    }
    return 0;
}

int main(){

  dublicate();
}