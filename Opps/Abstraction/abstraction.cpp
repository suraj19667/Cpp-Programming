//abstraction
#include<iostream>
using namespace std;

class demo{

    int a,b;
    
    public:
    void setdata(int a,int b){

        this->a=a;
        this->b=b;
    }
    void show(){
        cout<<" a = "<<a<<" b = "<<b<<endl;
    }
};
int main(){

    demo obj;
    obj.setdata(5,6);
    obj.show();

    
}