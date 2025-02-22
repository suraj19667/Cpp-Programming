//abstraction with the help of many classes
#include<iostream>
using namespace std;

class demo{

    public:
    virtual void show()=0;

    void display(){
    cout<<"DEMO"<<endl;
    }
};

class parent:public demo{

    public:
    void show(){
        cout<<"Parent"<<endl;
    }
};

class child:public demo{

    public:
    void show(){
        cout<<"CHILD"<<endl;
    }
};

int main(){

    demo *obj1;
    parent obj2;
    obj1=&obj2;
    obj1->show();
    obj1->display();
}