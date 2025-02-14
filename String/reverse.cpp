//reverse string
#include<iostream>
using namespace std;

int main(){

    string s="suraj";

    int j=s.length()-1;
    int i=0;

    while(i<j){

        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
        i++;
    }
    cout<<s;
}