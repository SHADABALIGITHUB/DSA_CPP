#include<bits/stdc++.h>
using namespace std;
    class Rectangle{
     private:
      int length;
      int breath;
     public:
      Rectangle();
      Rectangle(int l,int b);
      int area();
      void setLength(int l);
      void setBreath(int b);
      int getLength();
      int getBreath();

     };
     Rectangle::Rectangle(){
                cout<<"constructor called"<<endl;
     }
     Rectangle::Rectangle(int l,int b){
             length=l;
             breath=b;
             cout<<length<<"&"<<breath<<endl;
     }
     int Rectangle::area(){
           return length*breath;
     }
     void Rectangle::setLength(int l){
            length=l;
     }
     void Rectangle::setBreath(int b){
            breath=b;
     }
     int Rectangle::getLength(){
          return length;
     }
     int Rectangle::getBreath(){
             return breath;
     }

int main(){
      
       Rectangle ob;
       Rectangle ob2(2,4);
       ob.setLength(2);
       ob.setBreath(3);
       cout<<ob.area()<<endl;
            
       return 0;
} 
//  1. Constructor is a special member function of a class which is automatically called when an object of the class is created.