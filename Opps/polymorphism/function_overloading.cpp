//function overloading
#include<iostream>
using namespace std;

class demo{

    public:
    int sum(){
        cout<<"sum"<<endl;
    }
    int sum(int a){
    cout<<a<<endl;
    }

    int sum(int a, int b){
    cout<<a+b<<endl;
    }


};

int main(){

    demo obj;
    obj.sum();
    obj.sum(5);
    obj.sum(5,6);

}