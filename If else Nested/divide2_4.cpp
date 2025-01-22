//divide 2 or 4 
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    if(num%2==0){
        if(num%4==0){
            cout<<"divided by 2 and 4";
        }
            else{
                cout<<"not divided by 4";
            }
        }
    else{
        cout<<"invalid";
    }
}
   