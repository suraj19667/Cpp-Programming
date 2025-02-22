//static function in abstraction
#include<iostream>
using namespace std;

class demo{

    static int bankbalance;
    public:
    int num;

    static void deposite(int a=0){
        bankbalance=bankbalance+a;
        cout<<"You have SUCCESSFULLY Withdraw"<<a<<"Amount"<<endl;
    }
    void withdraw(int a=0){
        bankbalance=bankbalance-a;
        cout<<"You have SUCCESSFULLY Withdraw"<<a<<"Amount"<<endl;
    }

    void show(){
        cout<<"Remaining"<<bankbalance<<"Amount"<<endl;
    }
};

int demo::bankbalance=2000;

int main(){

    demo suraj;
    demo::deposite(30);
    suraj.deposite(100);
    demo rahul;
    rahul.withdraw(1000);
    rahul.withdraw();

    return 0;


}