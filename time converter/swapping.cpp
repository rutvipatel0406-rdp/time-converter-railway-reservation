#include<iostream>
using namespace std;

int main(){
    int a,b,c;

     cout<<"Enter a:";
     cin>>a;

     cout<<"Enter b:";
     cin>>b;

     cout<<"Before swapping"<<endl;

     cout<<"A is:"<<a<<endl;
     cout<<"B is :"<<b<<endl;

     cout<<"After swapping:"<<endl;

     c=a;
     a=b;
     b=c;

     cout<<"A is :"<<a<<endl;
     cout<<"B is :"<<b;
}