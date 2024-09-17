#include<bits/stdc++.h>
using namespace std;
class student{
    private:
      int age;
      int roll;
      public:
      string name= "Tanmoy Majee";
     void setage(int n){
        age = n;
     }
     void setroll(int roll){
        this->roll  = roll;
     }
     int getage(){
        return age;
     }
     int getroll(){
        return roll;
     }
};
int main(){
    student amit;
     cout<<amit.name<<endl;
     amit.setage(23);
     amit.setroll(215);
     cout<<amit.getage()<<endl;
     cout<<amit.getroll()<<endl;
    return 0;
}