#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(){

    Rectangle r;
    r.length=10;
    r.breadth=5;
    cout<<"Area of Recangle :"<<r.area()<<endl;
    cout<<"Perimeter of Rectangle :"<<r.perimeter()<<endl;

    // pointer to object

    Rectangle *p=&r;
    p->length=20;
    p->breadth=10;
    cout<<"Area of Recangle :"<<p->area()<<endl;
    cout<<"Perimeter of Rectangle :"<<p->perimeter()<<endl;


                    
  
                 
    return 0;
}