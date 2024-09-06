#include<bits/stdc++.h>
using namespace std;
class player{
    private:
    int score;
    int health;
    public:
    //setter
    void setscore(int s){
        score  = s;
    }
    void sethealth(int h){
        health = h;
    }
    //getter
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }
};
int main(){
     player tanmoy;
     tanmoy.setscore(20);
     tanmoy.sethealth(200);
     cout<<"Health is : "<<tanmoy.gethealth()<<endl;
     cout<<"Score is : "<<tanmoy.getscore()<<endl;
    return 0;
}