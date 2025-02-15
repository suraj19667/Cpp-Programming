//self structure
#include<iostream>
using namespace std;

struct node{

    int a;
    struct node *link;
};

int main(){

    node obj1;
    obj1.a=10;
    obj1.link=NULL;

    node obj2;
    obj2.a=30;
    obj2.link=&obj1;
    obj1.link=&obj2;

    cout<<obj1.link->a<<endl;
    cout<<obj2.link->a;

}