//Structure string with the help of pointer
#include<iostream>
using namespace std;

struct student{

    private:
    int roll;
    string name;
    
    public:
    void display(int x,string s){
        roll=x;
        name=s;
    }
    void show(){

        cout<<"Student Name:"<<name<<endl<<"Roll Number:"<<roll<<endl;
    }
};

int main(){

    student *var1;
    student var2;
    var2.display(101,"Suraj");
    
    var1=&var2;

    var1->show();
}