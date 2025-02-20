//Hirarical inheritance
#include<iostream>
using namespace std;

class grandparent{

    public:
    void show(){
        cout<<"grandparent"<<endl;
    }
};
class parent:public grandparent{

    public:
    void show(){

        cout<<"parent"<<endl;
    }
};

class child:public grandparent{

    public:
    void show(){
        cout<<"child"<<endl;
    }
};

int main(){

    child obj;
    obj.show();
    parent obj1;
    obj1.show();
}