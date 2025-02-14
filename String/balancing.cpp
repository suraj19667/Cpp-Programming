//balancing in string with the help of string
#include<iostream>
using namespace std;

int main(){

    string s="[{()}]";

    int cur=0,sq=0,par=0;

    int size=s.length();

    for(int i=0;i<size;i++){

        if(s[i]=='{')
        {
            cur++;
        }
        else if(s[i]=='('){par++;}

        else if(s[i]=='['){sq++;}

        else if(s[i]=='}'){
            cur--;
            if(cur<0){
                cout<<"Not Balancing";
                return 0;
            }
        }
        else if(s[i]==']'){
            sq--;
            if(sq<0){
                cout<<"Not Balancing";
                return 0;
            }
        }
        else if(s[i]==')'){
            par--;
            if(s[i]<0){
                cout<<"Not Balancing";
                return 0;
            }
        }
    }
}