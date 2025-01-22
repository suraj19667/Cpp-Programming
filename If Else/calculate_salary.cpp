//1lakh-50k (15%)
//30k-50K (10%)
//0k-30k (5%)

#include<iostream>
using namespace std;
int main(){
    int salary,gst=0;
    cout<<"Enter your salary:";
    cin>>salary;
    if(salary<=100000 && salary>=50000){
        gst=salary*0.15;
     cout<<"GST is 15%:"<<gst<<endl;
     cout<<"Total salary after gst:"<<salary-gst;
     
    }
    else if(salary<=50000 && salary>=30000){
        gst=salary*0.10;
        cout<<"GST is 10%"<<gst<<endl;
         cout<<"Total salary after gst:"<<salary-gst;
    }
    else if(salary>0 && salary<30000){
        gst=salary*0.05;
        cout<<"GST is 5%:"<<gst<<endl;
         cout<<"Total salary after gst:"<<salary-gst;
    }
    else{
        cout<<"invalid salary";
    }
}