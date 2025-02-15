//print object 
#include<iostream>
using namespace std;

class student{

    public:
    int a;
    
    void show(){
        cout<<"value of a"<<a<<endl;
    }
};

int main(){

    student obj1;
    student obj2;
    cout<<"Enter a Number:";
    cin>>obj1.a;
    cout<<"Enter a Number:";
    cin>>obj2.a;

    obj1.show();
    obj2.show();
}