#include<bits/stdc++.h>
using namespace std;
class book{
    private:
    string name;
    int page;
    float price;
    public:
    //setter
    void setname(string str){
        name = str;
    }
    void setpage(int n){
        page = n;
    }
    void setprice(float n){
        price = n;
    }
    //getter
    string getname(){
        return name;
    }
    int getpage(){
        return page;
    }
    float getprice(){
        return price;
    }
    //question-1
   int countbook(int p){
    if(price < p) return 0;
    else return 1;
   }
   //question-2
   bool isbookpresent(string s){
    if(name==s) return true;
    else return false;
   }
};
int main(){
 book c;
 c.setname("Let us c");
 c.setpage(576);
 c.setprice(548);
cout<<"1st ans is : "<<c.countbook(100)<<endl;
cout<<"2nd ans is : "<<c.isbookpresent("Let us")<<endl;
    return 0;
}