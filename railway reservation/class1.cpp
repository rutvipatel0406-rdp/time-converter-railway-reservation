#include<iostream>
using namespace std;

class student 
{
    public:int a=10;
    void print(){
        cout<<"Hello worlds !";
    }
};
int main(){
    student obj;
    obj.print();

    cout<<obj.a;
}