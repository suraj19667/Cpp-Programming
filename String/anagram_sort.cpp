//anagram with the help of sorting
#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string s1="anagram";
    string s2="aangrma";

    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());

    if(s1==s2){
        cout<<"anagram";
    }
    else{
        cout<<"Not an anagram";
    }
}