#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter 1:";
    cin>>num;
    if(num==1){
        cout<<"Select 2 3 4:";
        cin>>num;
        if(num==2){
            cout<<"Enter 3 4 :";
            cin>>num;
            if(num==3){
                cout<<"Enter 4:";
                cin>>num;
                if(num==4){
                    cout<<"Reached 4";
                }
                else{
                    cout<<"invalid";
                }
            }
            else if(num==4){
                cout<<"Reached 4";
            }
            else{
                cout<<"invalid";
            }
        }
        else if(num==3){
            cout<<"Select 2 4 :";
            cin>>num;
            if(num==2){
                cout<<"Select 4 :";
                cin>>num;
                if(num==4){
                    cout<<"Reached 4";
                }
                else{
                    cout<<"invalid";
                }
            }
            else if(num==4){
                cout<<"Reached 4";
            }
        }
        else if(num==4){
            cout<<"Reached 4";
        }
        else{
            cout<<"invalid";
        }
    }
    else{
        cout<<"invalid";
    }
}