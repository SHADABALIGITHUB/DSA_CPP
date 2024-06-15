#include<bits/stdc++.h>
using namespace std;
class Exam{
    private:
      int Roll;
      string name;
    public:
       void start(){
          cout<<"Exam starts"<<endl;
       }
       void stop(){
          cout<<"Exam end"<<endl;
       }
       void adddetails(int Roll,string name){
          this->Roll=Roll;
          this->name=name;
       }
    
       void showdetails(){

          cout<<"Roll Number is "<<Roll<<"&& Exam name is "<<name<<endl;
       }
        
        

};
int main(){
    Exam neet;
    neet.start();
    neet.stop();
    neet.adddetails(2024,"NEET");
    neet.showdetails();
    Exam jee;
    jee.start();
    jee.stop();
    jee.adddetails(2024,"JEE");
    jee.showdetails();
  
                 
    return 0;
}