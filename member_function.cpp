#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int age;
    int roll;
    void showage(){
        cout<<"Age is : "<<age<<endl;   //member function 
    }
};
int main(){
        student amit;
        amit.age = 10;
        amit.roll = 1383673373;
        amit.showage();
    return 0;
}