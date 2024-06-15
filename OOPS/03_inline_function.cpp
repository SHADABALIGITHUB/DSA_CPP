// 
// inline function are those whose code execute inside main fucntion not sepratly and declare inside class 


#include<bits/stdc++.h>
using namespace std;
class Car{
    public: void redcar(){
        cout<<" i am red car"<<endl;
     }
     void run();
};
void Car::run(){
    cout<<"runnning car"<<"\n";
}
int main(){
      
      Car c;
      c.redcar(); //inline function 
      c.run();
                 
    return 0;
}