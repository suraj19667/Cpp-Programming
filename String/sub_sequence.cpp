//subsequence of a string
#include<iostream>
using namespace std;

int main(){

    string s1="abc";
    string s2="aggbadfc";

    int i=0;
    int j=0;
   
    while(i<s1.length() && j<s2.length()){
        if(s1[i]==s2[j]){
            i++;
        }
        j++;
    }

    if(i==s1.length()){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}