#include<bits/stdc++.h>
using namespace std;
// struct 
struct Demo{
    int x=10;
    int y=20;
    void show(){
        cout<<"values are : "<<x<<" & "<<y<<endl;
    }
};
class Demo2{

     int x=10;
    int y=20;
    void show(){
        cout<<"values are : "<<x<<" & "<<y<<endl;
    }

};

int main(){
        //    struct works
         Demo d;
         d.x=40;
         d.y=50;
         d.show(); 

        //  class  error private member cannot access need be assign public:
        //  Demo2 d2;
        //  d2.x=40;
        //  d2.y=50;
        //  d2.show();  

        //  so
        // diffirence is struct is public by default and class is private


    return 0;
}