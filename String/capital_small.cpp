//capital to small and small to captal
#include<iostream>
using namespace std;

int main(){

    string s="aBaRy";

    int size=s.length();
    for(int i=0;i<size;i++){

        if(int (s[i]>=65 && int (s[i])<=90)){
            s[i]=char(int (s[i]+32));
        }
        else if(int (s[i])>=97 && int (s[i])<=122){
            s[i]=char(int (s[i])-32);
        }
    }
    cout<<s;
}