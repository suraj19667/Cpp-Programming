//operator overloading
#include<iostream>
using namespace std;

class demo{

    public:

    int value;

    demo(int val=0){
        value=val;
    }
    void operator +(demo &obj){
        cout<<value+obj.value;
    }
};
int main(){

    demo a(8);
    demo b(4);
    a+b;
}