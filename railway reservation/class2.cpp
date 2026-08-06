#include<iostream>
using namespace std;

class student{
    public:int a;

    void getdata( int args)
    {
        a=args;
        cout<<a;
    }
};
int main(){

    student obj;
    obj.getdata(100);
    
}