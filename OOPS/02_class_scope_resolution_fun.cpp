#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
     int length;
     int breadth;

    public:
      Rectangle();
      Rectangle(int l,int b);
      Rectangle(const Rectangle & r);
      int area();
      int perimeter();
      bool isSquare();
      void setLength(int l);
      void setBreath(int b);
      int getLength(){return length;}
      int getBreath(){return breadth;}
      ~Rectangle();


};

int main(){
    Rectangle r;
    cout<<r.area()<<endl;
    Rectangle r2(30,40);
    cout<<r2.perimeter()<<endl;
    
    
    
         
    return 0;
}

Rectangle::Rectangle(): breadth(40),length(20)
{
     
    
     cout<<length<<"&&"<<breadth<<endl;
}
Rectangle::Rectangle(int l,int b){
     length=l;
     breadth=b;
     cout<<length<<"&&"<<breadth<<endl;
}

Rectangle::Rectangle(const Rectangle &r):length(r.length),breadth(r.breadth){
    // length=r.length;
    //  breadth=r.breadth;
     cout<<length<<"&&"<<breadth<<endl;


}
int Rectangle::perimeter(){
     return 2*(length+breadth);
}
int Rectangle::area(){
    return length*breadth;
}
bool Rectangle::isSquare(){
    return length==breadth;
}
void Rectangle::setLength(int l){
       length=l;
}
void Rectangle::setBreath(int b){
           breadth=b;
}
Rectangle::~Rectangle(){
     cout<<"rectangle end here";
}

