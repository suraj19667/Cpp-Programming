//pallimdrom with return function
#include<iostream>
using namespace std;

int pallimdrom(){

    int arr[]={1,2,2,1};

    int i=0;
    int j=3;

    while(i<j){

        if(arr[i]!=arr[j]){

            cout<<"Not a Pallindrom";
            return 0;
        }
        i++;
        j--;
    }

    cout<<"Pallindrom";
    return 0;
}

int main(){

    pallimdrom();
}