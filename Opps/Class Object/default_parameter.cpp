//default parameterize
#include<iostream>
using namespace std;

class demo{
    
    public:
    demo(){

        cout<<"Constructure"<<endl;
    }

    demo(int x){
        cout<<x<<endl;
    }
    demo(int x,int y){
        cout<<x+y;
    }
};
int main(){

    demo obj1;
    demo obj2(5);
    demo obj3(5,4);
}