#include<iostream>
using namespace std;

class bank {
    int balance;

     public:void getprint(int balance )
     {
        this->balance=balance;
     }
     int setprint(){
        return balance;
     }
};

int main(){
    bank b;
    b.getprint(1000);
    cout<<b.setprint();

}