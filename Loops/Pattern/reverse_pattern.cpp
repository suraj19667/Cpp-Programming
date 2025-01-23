//reverse pramid pattern
//print pramid with pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    for(int r=0;r<n;r++){
        for(int c=0;c<=2*n-r-1;c++){
            if(c>r){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}