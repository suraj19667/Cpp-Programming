//array addition with return type
#include<iostream>
using namespace std;

int sum(){

    int arr[10]={4,5,5,6,8};
    int sum=0;
    
    for(int i=0;i<5;i++){
    sum=sum+arr[i];
        
    }
    return sum;
}
int main(){

    cout<<sum();
}