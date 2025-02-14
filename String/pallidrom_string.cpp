//pallidrom string
#include<iostream>
using namespace std;

int main(){


    string s="suraj";
    string ans=s;

    int j=s.length()-1;
    int i=0;

    while(i<j){

        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        j--;
        i++;
    }
    if(s==ans){
        cout<<"Pallidrom";
    }
    else{
        cout<<"Not a pallidrom";
    }
    
}