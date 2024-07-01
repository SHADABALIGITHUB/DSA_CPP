 #include<bits/stdc++.h>
 using namespace std;
 class Base{
   public:
       Base(){
        cout<<"Base constructor"<<endl;
        }
        Base(int x){
        cout<<"Base constructor :"<<x<<endl;
        }
 };
 class Derived:public Base{

     public:
           Derived(){
               cout<<"Derived class Called"<<endl;
           }
           Derived(int x){
               cout<<"Derived class Called :"<<x<<endl;
           }
           Derived(int x,int b):Base(x){
               cout<<"Derived With :"<<b<<endl;
           }



 };
 int main(){

     Derived ob1;
    //  Base constructor 
    // Derived class called
       
     Derived ob2(10);
    //  Base constructor
    //  Derived class called : 10

     Derived ob3(10,20);
     //  Base constructor :10
     //  Derived With :20
                  
     return 0;
 }