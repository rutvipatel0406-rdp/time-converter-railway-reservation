#include<iostream>
using namespace std;

class student 
{
    public:
    void getdata(){
         
         int a,b;

          cout<<"Enter a:";
          cin>>a;

          cout<<"enter b:";
          cin>>b;

          cout<<a<<endl<<b;
    }
};
int main(){
    student obj;
    obj.getdata();
    
}