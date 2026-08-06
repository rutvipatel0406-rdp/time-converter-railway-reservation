#include<iostream>
using namespace std;

class student{
    public: student(){
        cout<<"Default constructor call"<<endl; 
    }
    student(int a)
    {
        cout<<a;
    } 
};

int main(){

     student s(10);
     student s1;
}
