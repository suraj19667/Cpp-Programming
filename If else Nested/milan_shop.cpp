//milan shop and prices of dinner,desert,lunch
#include<iostream>
using namespace std;
int main(){
    string shop;
    cout<<"Enter Shop Name:";
    cin>>shop;
    if(shop=="Milan"){
        cout<<"WELCOME MILAN"<<endl;
        cout<<"Please select Dinner Desert Lunch:";
        cin>>shop;
        if(shop=="Dinner"){
            cout<<"Select Thali and Buffe:";
            cin>>shop;
            if(shop=="Thali"){
                cout<<"Price is 500";
            }
            else if(shop=="Buffe"){
                cout<<"Price is 800";
            }
            else{
                cout<<"Invalid";
            }
        }
        else if(shop=="Desert"){
            cout<<"Select Gulabjamun and Rashmalai:";
            cin>>shop;
            if(shop=="Gulabjamun"){
                cout<<"Price is 20";
            }
            else if(shop=="Rashmalai"){
                cout<<"Price is 40";
            }
            else{
                cout<<"Invalid";
            }
        }
        else if(shop=="Lunch"){
            cout<<"Select Thali and Buffe:";
            cin>>shop;
            if(shop=="Thali"){
                cout<<" Price is 300";
            }
            else if(shop=="Buffe"){
                cout<<"Price is 500";
            }
            else{
                cout<<"Invalid";
            }
        }
        else{
            cout<<"Invalid";
        }
    }
    else{
        cout<<"invalid";
    }
}