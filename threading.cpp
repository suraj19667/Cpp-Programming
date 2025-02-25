//multiple threading
#include<iostream>
#include<thread>
using namespace std;

void show(){
    for(int i=0;i<11;i++){
        cout<<i;
    }
}
void display(){
    for(int i=0;i<127;i++){
        cout<<char(i);
    }
}

int main(){

    thread t1(show);
    thread t2(display);

    t1.join();
    t2.join();
}