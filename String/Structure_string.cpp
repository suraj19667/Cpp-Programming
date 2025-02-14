//structure string with the help of function
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
        cout<<"Student Name:"<<name<<" "<<"Roll Number:"<<roll<<endl;
    }
}obj;
int main(){
    student a;
    a.display(101,"Suraj");
    student b;
    obj.display(102,"Suresh");
}