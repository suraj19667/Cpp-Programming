// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    using namespace std;
    int num;
    cout<<"enter a number:";
    cin>>num;
    
    int lastdigit,firstdigit,middle,sum;
    
    lastdigit=num%10;
    
    firstdigit=num/100;
    
    middle=(num/10)%10;
    
    sum=lastdigit+firstdigit;
    
        if(num<=999 && num>=100){
            if(sum>middle){
                cout<<"Greater";
            }
            
            else if(sum<middle){
                cout<<"Smaller";
            }
            else{
                cout<<"Equal";
            }
    }
    else{
        cout<<"Invalid";
    }
}