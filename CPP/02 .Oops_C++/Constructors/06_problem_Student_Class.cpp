#include<bits/stdc++.h>
using namespace std;
class Student{

   private:   int RollNo;
      string Name;
      int Math;
      int Science;
      int English;

     public: Student(int r,string Name,int m,int s,int e);
      void Detail();
      int total();
      char Grade();
               
     
};
Student::Student(int r,string Name,int m,int s,int e){
               
               RollNo=r;
               this->Name=Name;
               Math=m;
               Science=s;
               English=e;
               
}
void Student::Detail(){

     cout<<"Roll No:"<<RollNo<<"\nName :"<<Name<<endl;

}
 int Student::total(){
        return Math+Science+English;
      }
char Student::Grade(){
      
        if(((Math+Science+English)/3)>=90){
            return 'A';
        }
       else if(((Math+Science+English)/3)>=80){
            return 'B';
        }
       else if(((Math+Science+English)/3)>=70){
            return 'C';
        }
        else if(((Math+Science+English)/3)>=60){
            return 'D';
        }
        else if(((Math+Science+English)/3)>=50){
            return 'E';
        }
        else{
            return 'F';
        }
}

int main(){
                    
   Student st(1,"Shadab",60,50,100);
   st.Detail();
   cout<<st.total()<<endl;
   cout<<"Grade :"<<st.Grade()<<endl;
   
                 
    return 0;
}