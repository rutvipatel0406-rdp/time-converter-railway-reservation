#include<iostream>
using namespace std;

int main (){

    int sec,hrs,min,total;

    cout<<"Enter seconds:";
    cin>>total;

    hrs=total/3600;
    total=sec%3600;

    min=total/60;
    sec=total%60;

   cout<<"time is :"<<hrs<<":"<<min<<":"<<sec;


}