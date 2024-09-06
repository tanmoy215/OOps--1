#include<bits/stdc++.h>
using namespace std;
class calculator{
    public:
    int a;
    int b;  //these are data member
    void add(){
        cout<<"Addition is : "<<a+b<<endl;
    }
    void subtract(){
        cout<<"Subtraction is : "<<a-b<<endl;    //these are member function
    }
    void division(){
        cout<<"Division is : "<<a/b<<endl;
    }
    void mul(){
        cout<<"Multiplication is : "<<a*b<<endl;
    }
};
int main(){
    int n,m;
    cout<<"enter a and b : ";
    cin>>n>>m;
    calculator calsi;
    calsi.a = n;
    calsi.b = m;
    calsi.add();
    calsi.division();
    calsi.subtract();
    calsi.mul();
    return 0;
}