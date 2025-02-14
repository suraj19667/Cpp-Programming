//anagram program
#include <iostream>
using namespace std;

int main(){
    
    string s1="anagram";
    string s2="nagaram";
    int a[]={0};
    int b[]={0};
    for(int i=0;i<s1.size();i++){
        a[s1[i]-'a']++;
    }
    if(s1.size()!=s2.size()){
        cout<<"Not Anagram";
}
else{
    cout<<"Anagram";
}
}