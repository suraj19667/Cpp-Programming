//find college fees and enter valid collage
#include<iostream>
using namespace std;
int main(){
    string collage;
    cout<<"Enter Your Collage Name:";
    cin>>collage;

    if(collage=="Sage"){
        cout<<"Welcome"; 
        cout<<"Enter Collage Name:";
        cin>>collage;

    if(collage=="B.com"){
            cout<<"Fees 20000";
            }

        else if(collage=="MBA"){
                cout<<"Fees 40000";
            }

         else if(collage=="B.tech"){
                cout<<"Fees 60000";
    }

        else{
            cout<<"Please Enter Valid Cource";
        }
    }
    else{
        cout<<"Invalid!";
    }
}