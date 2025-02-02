//find the digit is plidrom or not
#include<iostream>
using namespace std;
int main(){
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
}