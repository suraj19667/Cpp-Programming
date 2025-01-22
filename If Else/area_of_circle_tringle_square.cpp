//find the area of circle,tringle, square by select 1 for area of circle, 2 for tringle, 3 for square
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int choice;
    cout<<"1.Area of circle"<<endl;
    cout<<"2.Area of tringle"<<endl;
    cout<<"3.Area of square"<<endl;
    cout<<"Enter the Number:";
    cin>>choice;
    if(choice==1){
        double radius;
        //const double PI=3.14;
        cout<<"Enter the radius of circle:";
        cin>>radius;
        double area=M_PI*radius*radius;
        cout<<"Radius of the circle:"<<area;
    }
    else if(choice==2){
        double base;
        double height;
        cout<<"Enter the base of tringle:";
        cin>>base;
        cout<<"Enter the height of tringle:";
        cin>>height;
        double area=0.5*base*height;
        cout<<"Area of tringle:"<<area;
    }
    else if(choice==3){
        double side;
        cout<<"Enter the side of square:";
        cin>>side;
        double area=side*side;
        cout<<"Area of square:"<<area;
    }
    else{
        cout<<"Invalid choice";
    }
}