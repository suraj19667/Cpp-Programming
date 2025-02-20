//virtual 
#include<iostream>
using namespace std;

class A{

    public:
    virtual void show(){

        cout<<"A"<<endl;
    }
};
class B:virtual public A{

    public:
    void show(){
        cout<<"B"<<endl;
    }
};
class C:virtual public A, public B{

    void show(){

        cout<<"C"<<endl;
    }
};

int main(){

    A *obj;
    A obj3;
    B obj1;
    C obj2;

    obj=&obj1;
    obj->show();
    obj=&obj2;
    obj->show();
    obj=&obj3;
    obj->show();

}