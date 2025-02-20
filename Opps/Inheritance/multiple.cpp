//multiple inheritance
#include<iostream>
using namespace std;

class grandparent{

    public:
    grandparent(){
        cout<<"grandparent";
    }
};
class parent{

    public:
    parent(){
        cout<<"Parent"<<endl;
    }
};
class child:public grandparent,public parent{

    public:
    child(){
        cout<<"child";
    }
};
int main(){

    child obj;
}