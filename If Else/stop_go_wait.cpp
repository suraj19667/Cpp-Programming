//red for stop, green for go, yellow for wait
#include<iostream>
using namespace std;
int main(){
    string light;
    cout<<"Enter light:";
    cin>>light;
    if(light=="Red"){
        cout<<"Stop";
    }
    else if(light=="Green"){
        cout<<"Go Go Go";
    }
    else if(light=="Yellow"){
        cout<<"Wait !";
    }
    else{
        cout<<"Pleace Valid Light !";
    }
}