#include<iostream>
using namespace std;
int main(){
    string purchase;
    int salary;
    cout<<"Enter Salary:";
    cin>>salary;
    if(salary>10000 && salary<=50000){
        cout<<"Select Mobile and Laptop:";
        cin>>purchase;

        if(purchase=="Mobile"){
            cout<<"Mobile Price=20000"<<endl;
            int per=20000*0.10;
            cout<<"Percentage(10%):"<<per<<endl;
            cout<<"Total interes:"<<per*12<<endl;
        }
        else if(purchase=="Laptop"){
            cout<<"Laptop Price=30000"<<endl;
            int per=30000*0.10;
            cout<<"Percentage(10%):"<<per<<endl;
            cout<<"Total interes:"<<per*12<<endl;
        }
        else{
            cout<<"invalid";
        }
    }
    else if(salary>50000 && salary<=100000){
            cout<<"Select Tv and Frize:";
        cin>>purchase;

        if(purchase=="Tv"){
            cout<<"Tv Price 50000"<<endl;
            int per=50000*0.15;
            cout<<"Percentage(15%):"<<per<<endl;
            cout<<"Total interes:"<<per*24<<endl;
        }
        else if(purchase=="Frize"){
            cout<<" Frize Price 70000"<<endl;
            int per=70000*0.15;
            cout<<"Percentage(15%):"<<per<<endl;
            cout<<"Total interes:"<<per*24<<endl;
        }
        else{
            cout<<"invalid";
        }
    }
    else if(salary>100000 && salary<=500000){
            cout<<"Select Bike and Car:";
        cin>>purchase;

        if(purchase=="Bike"){
            cout<<"Bike Price 100000"<<endl;
            int per=100000*0.20;
            cout<<"Percentage(20%):"<<per<<endl;
            cout<<"Total interes:"<<per*36<<endl;
        }
        else if(purchase=="Car"){
            cout<<"Car Price 500000"<<endl;
            int per=30000*0.20;
            cout<<"Percentage(20%):"<<per<<endl;
            cout<<"Total interes:"<<per*36<<endl;
        }
        else{
            cout<<"invalid";
        }
    }
    else{
        cout<<"Please Enter Valid Salary!";
    }
}