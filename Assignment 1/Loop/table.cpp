//print table with input by user
#include<iostream>
using namespace std;

int table(){

        int table;
        cout<<"Enter the table :";
        cin>>table;
        for(int i=1;i<=10;i++){
            cout<<i*table<<endl;
        }

        return 0;
    }
int main(){

    table();
   
}