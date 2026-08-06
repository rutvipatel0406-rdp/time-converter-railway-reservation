#include<iostream>
using namespace std;

class student {

     public:int age;
     student (int a)    //paramterized
     {
        age=a;
     }
     student( student &s)  //copy
     {
        age=s.age;
     }
};

int main(){
    student s1(10);
    student s2(s1);

    cout<<s1.age;
    cout<<s2.age;
}