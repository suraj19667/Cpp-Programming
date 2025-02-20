//Hybrid inheritance
#include<iostream>
using namespace std;

class grandgrantparent{

    public:
    void show(){
        cout<<"grandgrandparent"<<endl;
    }
};

class grandparent:public grandgrantparent{

    public:
    void show(){
        cout<<"parent"<<endl;
    }
};

class parent:public grandparent{

    public:
    void show(){
        cout<<" child"<<endl;
    }
};

class child:public parent, public grandparent, public grandgrantparent{

    public:
    void show(){
        cout<<"child"<<endl;
    }
};

int main(){

    child obj;
    obj.show();
}
