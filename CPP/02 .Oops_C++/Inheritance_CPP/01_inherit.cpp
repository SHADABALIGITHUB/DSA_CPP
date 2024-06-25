#include<bits/stdc++.h>
using namespace std;
class Coding{
    public:
         void display(){
         cout<<"i am parent";
       }
       
};
class Leetcode:public Coding{

     public:
        void display(){
            
            cout<<" i am Child ";

        }

};
int main(){
                    
    Leetcode student;

    student.display();
                 
    return 0;
}